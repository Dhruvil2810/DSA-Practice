#include<iostream>
#include<map>
using namespace std;
int main(){
      map<int, string> students;

    students[101] = "Dhruvil";
    students[102] = "Rahul";
    students[103] = "Aman";

    cout << students[101] << endl;
    cout << students[102] << endl;
    cout << students[103] << endl;

    return 0;
}

