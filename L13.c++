#include <iostream>
#include<vector>
using namespace std;
int main() {

    string s = "LVIII";

    int I = 1, V= 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
    int number = 0;

    for(int i = 0; i<s.size(); i++){
        cout<<s[i]<<endl;
    }
    for(int i = 0; i<s.size(); i++){

        if(s[i] == 'I' && i+1 < s.size() && s[i+1] == 'V') {
            number += 4;
            i++; 
            continue;
        }
        if(s[i] == 'I' && i+1 < s.size() && s[i+1] == 'X') {
            number += 9;
            i++; 
            continue;
        }
        if(s[i] == 'I'){
           number+=I;
            continue;
        }else if(s[i] == 'V'){
            number+=V;
            continue;
        }if(s[i] == 'X' && i+1 < s.size() && s[i+1] == 'L') {
            number += 40;
            i++; 
            continue;
        }if(s[i] == 'X' && i+1 < s.size() && s[i+1] == 'C') {
            number += 90;
            i++; 
            continue;
        }
        else if(s[i] == 'X'){
            number+=X;
            continue;
        }else if(s[i] == 'L'){
            number+=L;
            continue;
        }if(s[i] == 'C' && i+1 < s.size() && s[i+1] == 'D') {
            number += 400;
            i++; 
            continue;
        }if(s[i] == 'C' && i+1 < s.size() && s[i+1] == 'M') {
            number += 900;
            i++; 
            continue;
        }
        else if(s[i] == 'C'){
            number+=C;
            continue;
        }else if(s[i] == 'D'){
            number+=D;
            continue;
        }else if(s[i] == 'M'){
            number+=M;
        }
    }

    cout<<number;

    return 0;
}