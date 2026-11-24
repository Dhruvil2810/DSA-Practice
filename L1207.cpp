#include<iostream>
#include<vector>
#include<map>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> arr={3,5,-2,-3,-6,-6};


    map<int,int> m;
    unordered_set<int> seen;
    for(int i=0 ; i< arr.size(); i++){
        m[arr[i]]++;
    }

    for(auto x :m){
        if(seen.count(x.second)){
            return false;
        }
        seen.insert(x.second);
    }
    return true;
    return 0;
}