
#include <iostream>
#include<vector>
using namespace std;
int main() {

    vector<int> nums = {3,3};
    vector<int> ans(2);
    int target =6;
    int diff = 0;
    for(int i  = 0 ; i < nums.size(); i++){
        diff = target - nums[i];
        for(int j = 0; j<nums.size(); j++){
            if(i == j){
                continue;
            }
            if(diff == nums[j]){
                ans[0] = i;
                ans[1] = j;
            }
        }
    }
    for(int c : ans){
        cout<<c<<endl;
    }

    return 0;
}