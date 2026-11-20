// // prime number
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     if (!(cin >> n)) return 1;

//     if (n < 2) {
//         cout << n << " is not a prime number." << endl;
//         return 0;
//     }

//     if (n == 2) {
//         cout << n << " is a prime number." << endl;
//         return 0;
//     }

//     if (n % 2 == 0) {
//         cout << n << " is not a prime number." << endl;
//         return 0;
//     }

//     for (int i = 3; i <= n / i; i += 2) {
//         if (n % i == 0) {
//             cout << n << " is not a prime number." << endl;
//             return 0; // Found a factor, exit early
//         }
//     }

//     cout << n << " is a prime number." << endl;
//     return 0;
// }



// //next  prime number
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     if (!(cin >> n)) return 1;
//     int next = n+1;
//     bool flag = true; 
//     while(flag){
//         if (next < 2) {
//             next+=1;
//             continue;
//         }

//         if (next == 2) {
//             cout << next << " is a prime number." << endl;
//             flag  = false;
//         }
//         else if (next % 2 == 0) {
//             next+=1;
//             continue;
//         }else{
//             for (int i = 3; i <= next / i; i += 2) {
    
//                if (next % i == 0) {

//                     break;
//                 }
//                 flag = false;
//             }
//         }

//         if (flag == false) {
//             cout << next << " is the next prime number." << endl;
//             break;
//         }

//         next++;
//     }
//     return 0;
// }



// // prime number till n 
// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     if (!(cin >> n)) return 1;
//     int count=0;
    
//     vector<int> v;

//     for(int i = 2; i<=n ; i++ ){
//         if(i==2){v.push_back(i); continue;}
//         if(i%2==0){continue;}
//         for(int k = 3; k<=i/k; k++){
//             if(i%k==0){
//                 count++;
//             }
//         }
//         if(count==0){
//             v.push_back(i);
//         }
//         count=0;
//     }

//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i]<<"  ";
//     }
//     return 0;
// }


// //prime of sum
// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     if (!(cin >> n)) return 1;
//     int count=0;
//     bool flag = false;
//     vector<int> v;
//     for(int i = 2; i<=n ; i++ ){
//         count = 0;
//         if(i==2){v.push_back(i); continue;}
//         if(i%2==0){continue;}
//         for(int k = 3; k<=i/k; k+=2){
//             if(i%k==0){
//                 count++;
//                 break;
//             }
//         }
//         if(count==0){
//             v.push_back(i);
//         }
//     }
//     int sum = 0;

//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i]<<"  ";
//     }
//     cout<<endl;
//     for(int i = 0; i<v.size(); i++){
//         for(int k =i+1; i<v.size(); k++){
//             sum = v[i]+v[k];
//             if(sum==n){
//                 flag = true;
//                 cout<<flag;
//             }
//         }
//     }
//     return 0;
// }



//super prime 

#include <iostream>
#include<vector>
using namespace std;
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    if(num==2){return true;}
    if(num%2==0){
        return false;
    }

    for(int i = 3;i<=num/i; i+=2 ){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    if (!(cin >> n)) return 1;
    int count=1;
    vector<int> list;
    
    for(int i = 1;i<=n; i++ ){
        if(isPrime(i)){
            if(isPrime(count)){
                list.push_back(i);
            }
            
            count++;
        }
    }

    for(int i = 0;i<list.size(); i++ ){
        cout<<list[i]<<" ";
    }
}