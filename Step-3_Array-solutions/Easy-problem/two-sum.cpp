#include<iostream>
#include<vector>
#include<map>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mapp;
        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int required = target - current;
            if (mapp.find(required) != mapp.end()) {
                return { mapp[required], i };
            }
            mapp[current] = i;
        }
        return {}; // Return an empty vector if no pair is found
    }
};



main(){
int n;
cin>>n;
int arr[n];

return 0;
}