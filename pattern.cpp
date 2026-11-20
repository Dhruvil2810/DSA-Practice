// left pattern
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =1; i<=n ; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// right pattern
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =1; i<=n ; i++){

//         for(int s = 1;s <= n-i;s++){
//             cout<<"  ";
//         }

//         for(int j = 1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// simple triangle pattern
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

//revrse simple left  pattern
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =0; i<n ; i++){

//         for(int j = n-i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//revrse simple right  pattern
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =0; i<n ; i++){

//         for(int s = 0;s <= i;s++){
//             cout<<"  ";
//         }

//         for(int j = n-i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//revrse simple triangle  pattern
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =0; i<n ; i++){

//         for(int s = 0;s <= i;s++){
//             cout<<" ";
//         }

//         for(int j = n-i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//star triangle
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     int count = 1;
//     for(int i =1; i<=n ; i++){

//         for(int s = 1;s <= n-i;s++){
//             cout<<" ";
//         }

//         for(int j = 1; j<=count; j++){
//             cout<<"*";
//         }
//         count+=2;
//         cout<<endl;
//     }
//     return 0;
// }




// //star reverse triangle
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     int count =(2*n)-1 ;
//     for(int i =0; i<n ; i++){

//         for(int s = 0;s <i;s++){
//             cout<<" ";
//         }

//         for(int j = 1; j<=count; j++){
//             cout<<"*";
//         }
//         count-=2;
//         cout<<endl;
//     }
//     return 0;
// }


// // pyramid
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;
//     for(int i =1; i<=n ; i++){

//         for(int s = 1;s <= n-i;s++){
//             cout<<"  ";
//         }

//         for(int j = 1; j<i; j++){
//             cout<<j<<" ";
//         }

//         for(int k =i ; k>=1; k--){
//             cout<<k<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//star dimand
// #include <iostream>
// using namespace std;
// int main() {

//     int n ;
//     cin>>n;

//     for(int i =1; i<=n ; i++){

//         for(int s = 1;s <=n-i;s++){
//             cout<<" ";
//         }

//         for(int j = 1; j<=i; j++){
//             cout<<"* ";
//         }

//         cout<<endl;
//     }

//     for(int i = 0 ; i<n; i++){
//         for(int s = 0; s<i; s++){
//             cout<<" ";
//         }

//         for(int j= 1; j<=n-i; j++ ){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }









//square pattern
#include <iostream>
using namespace std;
int main() {

    int n,m ;
    cin>>n>>m;

    for(int i  = 1; i<=n; i++){
            for(int j = 1; j<=m ; j++){
                if(i ==1 || i==n || j==1 || j==m){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    return 0;
}