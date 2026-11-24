// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     if (!(cin >> n)) return 1;
//     int count=0;

//     vector<bool> isPrime(n, true);
//     if(n<=2){
//         return 0;
//     }

//     isPrime[0] = false;
//     isPrime[1] = false;

//     for(int i = 2; i<=n/i; i++){
//         if(isPrime[i]){
//             for(int j = i*i; j<n; j+=i){
//                 isPrime[j] = false;
//             }
//         }
//     }

//     for(bool i : isPrime){
//         if(i){
//             count++;
//         }
//     }
//     cout<<count;

//     return 0;
// }




#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 1;

    
    int number = 0;
    int place = 1;
    bool flag = false;
    if(n < 0){
        flag = true;
        n*=-1;
    }
    
    while (n > 0) {
        int rem = n % 7;
        number += rem * place;
        place *= 10;
        n = n / 7;
    }
    if(flag){
        return number*(-1);
    }
    cout << number;
    return 0;
}
