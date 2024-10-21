/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n=arr.size();
       sort(arr.begin(),arr.end());
    int result= max(arr[n-1]*arr[n-2]*arr[n-3],arr[0]*arr[1]*arr[n-1]);
    return result;
    }
};
