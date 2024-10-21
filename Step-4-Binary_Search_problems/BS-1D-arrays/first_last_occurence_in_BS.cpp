/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

*/

#include<bits/stdc++.h>
using namespace std;

 int first(vector<int>& arr, int target)
    {
        int low=0;int high=arr.size()-1;int first=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return first;
    }

    int second(vector<int>& arr, int target)
    {
        int low=0;int high=arr.size()-1;int last=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(arr[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int>ans;
        int f=first(arr,target);
        if(f==-1) return {-1,-1};
        int s=second(arr,target);
        ans.push_back(f);
        ans.push_back(s);
        return ans;
    }