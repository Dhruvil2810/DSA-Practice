#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> arr={2,2,1,1,1,2,2};

   map<int,int> m;

    for(int i : arr){
        m[i]++;
    }

    int maxValue = 0;
    int maxKey;

    for(auto i : m){
        if(maxValue <i.second){
            maxValue = i.second;
            maxKey = i.first;
        }
    }
    cout<<maxKey;
    return 0;
}