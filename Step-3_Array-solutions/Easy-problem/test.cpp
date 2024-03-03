#include<bits/stdc++.h>
// #include<functional>
#include "functions.cpp"
using namespace std;

int main() {
    vector<int> nums = {1, 4, 5, 2, 3, 4, 2, 3, 4, 2};
    int target = 2;
    unordered_map<int,int> mpp;
    for(auto it: nums){
        mpp[it]++;  
    }
    cout<< mpp[target];
}