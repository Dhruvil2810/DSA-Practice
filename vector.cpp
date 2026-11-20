// // #include <iostream>
// #include <bits/stdc++.h>
// // #include<vector>
// using namespace std;
// int main() {

//     vector<int> v(5);
//     int max;
//     for(int i = 0; i<5; i++){
//         cin>>v[i];
//     }
//     max = v[0];
//     for(int i = 0; i<5; i++){
//         if(max < v[i]){
//             max = v[i];
//         }
//     }
//     cout<<max;
//     return 0;
// }



// #include <iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     vector<int> ans(2*n);

//     for(int i = 0; i<n; i++){
//         cin>>v[i];
//     }

//     for(int i = 0; i<n; i++){
//         ans[i] = v[i];
//         ans[i+n]= v[i];
//     }

//     for(int i = 0; i<2*n; i++){
//         cout<<ans[i]<<" ";
//     }
    
//     return 0;
// }



// #include <iostream>
// #include<vector>
// using namespace std;
// int main() {

//     vector<int> chalk ={5,1,5};
//     int k = 22;

//     long long sum = 0;
//     for(int c: chalk){
//         sum+=c;
//     }

//     k %= sum;

//     for(int i = 0; i<chalk.size(); i++){
//         if(k<chalk[i]){
//             cout<<i<<endl;
//             break;
//         }
//         k-=chalk[i];
//     }

//     return 0;
// }


// #include <iostream>
// #include<vector>
// using namespace std;
// int main() {

//     vector<int> nums ={1,1,1,1};
//     int count = 0;

//     for(int i = 0; i<nums.size(); i++){
//         for(int j = i+1; j<nums.size(); j++){
//             if(nums[i] == nums[j]){
//                 count++;
//             }
//         }
//     }
//     cout<<count;
    

//     return 0;
// }




