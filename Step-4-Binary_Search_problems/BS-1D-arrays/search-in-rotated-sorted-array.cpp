/*
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array 
is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated 
at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of 
target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

*/
#include<bits/stdc++.h>
using namespace std;


int search(vector<int>& nums, int target) 
        {
        int s=0, e=nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target<nums[mid])
                    e = mid-1;
                else
                    s = mid+1;
            }
            else{
                if(nums[mid]<target && target<=nums[e])
                    s = mid+1;
                else
                    e = mid-1;
            }
        }
        return -1;
}