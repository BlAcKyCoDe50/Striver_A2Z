/*
Single Element in a Sorted Array

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10

*/
#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        if(arr[0]!=arr[1]) return arr[0];
        if(arr[n-1]!=arr[n-2]) return arr[n-1];
        int low=1;int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) return arr[mid];
            if((mid%2==1 && arr[mid-1]==arr[mid]) || mid%2==0 && arr[mid]==arr[mid+1]) low=mid+1;
            else high=mid-1;
            
        }
        return -1;
    }