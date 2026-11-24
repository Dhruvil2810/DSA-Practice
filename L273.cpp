
#include <iostream>
#include<map>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 1;

    int rem,rem1;

    map<int,string> m1;

    int position = 1;
    string number="";

    m1[1] = "One";
    m1[2] = "Two";
    m1[3] = "Three";
    m1[4] = "Four";
    m1[5] = "Five";
    m1[6] = "Six";  
    m1[7] = "Seven";
    m1[8] = "Eight";
    m1[9] = "Nine";

    map<int,string> m2 = {
        {1,"Ten"},
        {2, "Twenty"},
        {3, "Thirty"},
        {4, "Fourty"},
        {5, "Fifty"},
        {6, "Sixty"},
        {7, "Seventy"},
        {8, "Eighty"},
        {9, "Ninty"}
    };

    map<int,string> m3 = {
        {11,"Eleven"},
        {12, "Twelve"},
        {13, "Thirteen"},
        {14, "Fourteen"},
        {15, "Fifteen"},
        {16, "Sixteen"},
        {17, "Seventeen"},
        {18, "Eighteen"},
        {19, "Ninteen"}
    };

    
    while(n>0){

        rem1 = n %100;
        rem = n %10;

        if(position == 1){
            if(rem1 >= 11 && rem1 <= 19){
                number = number +  m3[rem1];
                position+=2;
                n/=100;
                continue;
            }
            number = number +  m1[rem];
        }else if(position == 2){
            number =  m2[rem]  +" " +number;
        }
        else if(position == 3 && rem !=0 ){

            number =  m1[rem]  +" "+"hundred " +number;
        }else if(position == 4 && rem !=0 ){

            number =  m1[rem]  +" "+"thousand " +number;
        }else if(position == 5 && rem !=0 ){

            number =  m2[rem]+" "  +number;
        }
        position+=1;
        n/=10;
    }

    cout<<number;
    return 0;
}
