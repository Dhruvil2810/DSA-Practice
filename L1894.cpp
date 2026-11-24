
#include <iostream>
#include<vector>
using namespace std;
int main() {

    vector<int> nums ={1,1,1,1};
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}