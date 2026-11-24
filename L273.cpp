#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 1;

    if (n == 0) {
        cout << "Zero";
        return 0;
    }

    int rem, rem1;
    int position = 1;
    string number = "";

    bool thousandAdded = false;
    bool millionAdded = false;

    map<int, string> m1 = {
        {1, "One"}, {2, "Two"}, {3, "Three"},
        {4, "Four"}, {5, "Five"}, {6, "Six"},
        {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    map<int, string> m2 = {
        {1, "Ten"}, {2, "Twenty"}, {3, "Thirty"},
        {4, "Forty"}, {5, "Fifty"}, {6, "Sixty"},
        {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"}
    };

    map<int, string> m3 = {
        {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"},
        {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"},
        {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}
    };

    while (n > 0) {
        rem1 = n % 100;
        rem = n % 10;
        bool flag = (rem1 >= 11 && rem1 <= 19);

        if (position == 1) {
            if (flag) {
                number = m3[rem1] + " " + number;
                position += 2;
                n /= 100;
                continue;
            }
            if (rem != 0) {
                number = m1[rem] + " " + number;
            }
        } else if (position == 2 && rem != 0) {
            number = m2[rem] + " " + number;
        } else if (position == 3 && rem != 0) {
            number = m1[rem] + " Hundred " + number;
        } else if (position == 4) {
            if (flag) {
                number = m3[rem1] + " Thousand " + number;
                thousandAdded = true;
                position += 2;
                n /= 100;
                continue;
            }
            if (rem != 0) {
                number = m1[rem] + " Thousand " + number;
                thousandAdded = true;
            }
        } else if (position == 5 && rem != 0) {
            if (!thousandAdded) {
                number = m2[rem] + " Thousand " + number;
                thousandAdded = true;
            } else {
                number = m2[rem] + " " + number;
            }
        } else if (position == 6 && rem != 0) {
            if (!thousandAdded) {
                number = m1[rem] + " Hundred Thousand " + number;
                thousandAdded = true;
            } else {
                number = m1[rem] + " Hundred " + number;
            }
        } else if (position == 7) {
            if (flag) {
                number = m3[rem1] + " Million " + number;
                millionAdded = true;
                position += 2;
                n /= 100;
                continue;
            }
            if (rem != 0) {
                number = m1[rem] + " Million " + number;
                millionAdded = true;
            }
        } else if (position == 8 && rem != 0) {
            if (!millionAdded) {
                number = m2[rem] + " Million " + number;
                millionAdded = true;
            } else {
                number = m2[rem] + " " + number;
            }
        } else if (position == 9 && rem != 0) {
            if (!millionAdded) {
                number = m1[rem] + " Hundred Million " + number;
                millionAdded = true;
            } else {
                number = m1[rem] + " Hundred " + number;
            }
        } else if (position == 10 && rem != 0) {
            number = m1[rem] + " Billion " + number;
        }

        position += 1;
        n /= 10;
    }

    // Remove the trailing space
    if (!number.empty() && number.back() == ' ') {
        number.pop_back();
    }

    cout << number;
    return 0;
}