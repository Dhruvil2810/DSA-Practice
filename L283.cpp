#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> nums = {0};
    int n = nums.size();

    int low = 0,mid = 0, temp;
    for(int i = 0; i<n; i++){
        if(nums[mid]==0){
            mid++;
        }else{
            temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            mid++;
            low++;
        }
    }

    for(int i : nums){
        cout<<i<<" ";
    }
    return 0;
}