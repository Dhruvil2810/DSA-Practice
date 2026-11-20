// #include <iostream>
// using namespace std;
// int main() {

//     int n = 4;
//     for(int i =1; i<=n; i++ ){
        
        
//         for(int j = 1; j <= i; j++) {
//             cout << j;
//         }
        
//         cout << endl;
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main() {

//     int n = 4;
//     for(int i =1; i<=n; i++ ){
        
//         for(int K= 1; K <= n - i; K++) {
//             cout << " ";
//         }
        
//         for(int j = 1; j <= i; j++) {
//             cout << j;
//         }
        
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =1; i<=n; i++ ){
        
//         for(int K= 1; K <= n - i; K++) {
//             cout << " ";
//         }
        
//         for(int j = 1; j <= i-1; j++) {
//             // cout << j;
//             cout << "*";
//         }

//         for(int p = i; p>=1; p-- ){
//             // cout<<p;
//             cout << "*";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }








// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =1; i<=n; i++ ){


        
//         for(int K= 1; K <= n - i; K++) {
//             cout << "  ";
//         }
        
//         for(int j = 1; j <= i-1; j++) {
//             cout << j<<" ";
//         }

//         for(int p = i; p>=1; p-- ){
//             cout<<p<<" ";
//         }

//         cout << endl;
//     }

//     for(int i =n-1 ; i>=1; i--){
//         for(int K= 1; K <= n - i; K++) {
//             cout << "  ";
//         } 
        
//         for(int j = 1; j < i+1; j++) {
//             cout << j<<" ";
//         }

//         for(int p = i-1; p>=1; p-- ){
//             cout<<p<<" ";
//         }

//         cout<<endl;
//     }
//     return 0;
// }












// #include <iostream>
// using namespace std;
// int main() {

//     int n = 4;
//     for(int i =1; i<=n; i++ ){
        
        
//         for(int j = 1; j <= i; j++) {
//             cout << j<<" ";
//         }
        
//         cout << endl;
//     }
//     for(int i =n-1; i>=1; i-- ){
        
//         for(int K= 1; K <= n - i; K++) {
//              cout << "  ";
//        } 

//         for(int j =n-i+1 ; j <= n; j++) {
//             cout << j<<" ";
//         }
        
//         cout << endl;
//     }


//     return 0;
// }












// #include <iostream>
// using namespace std;
// int main() {

//     int i;
//     cin>>i;
//     int a=0;


//    while(i>0){
//         a = a*10 +(i%10);
//         i = i/10;

//    }
//    cout<<a;
//     return 0;
// }

// class Solution {
// public:
//     int reverse(int x) {
//         int y;
//         int a=0;
//     if(x<0){
//         x = x-1;
//         while(x>0){
//         a = a*10 +(x%10);
//         x = x/10;
//     }
//     return x*-1;
//     }else{

//    while(x>0){
//         a = a*10 +(x%10);
//         x = x/10;}

//    }
   

//     return a;
//     }
// };











// #include <iostream>
// using namespace std;
// int main() {

//     int n;
//     cin >> n;
//     int count  = (2*n)-1;

//     for(int i = 1; i<=n; i++){

//         for(int s=1; s <=n-i  ;s++){
//             cout<<" ";
//         }
//         for(int k = count; k>=1; k--){
//             cout<<"*";
//         }
//         count-=2;
//         cout<<endl;
//     }
// }






// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =1; i<=n ; i++){

//         for(int s = 1;s <= n-i;s++){
//             cout<<" ";
//         }


//         for(int j = 1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

