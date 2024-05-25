/*

Given an integer array nums and an integer k, split nums into k non-empty 
subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest 
sum among the two subarrays is only 18.
Example 2:

Input: nums = [1,2,3,4,5], k = 2
Output: 9
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.

*/

// *************************************

//     NOTE: This question is same as the Book alocation question.
        // code360 platform gives this problem name painter allocation problem
        // Painter allocation problem also has the same solution

// **********************************
#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int>&arr,int pages)
    {
        int n=arr.size();
        int students=1;
        long long pagesStudent=0;
        for(int i=0;i<n;i++)
        {
            if(pagesStudent+arr[i]<=pages) pagesStudent+=arr[i];
            else{
                students++;
                pagesStudent=arr[i];
            }
        }
        return students;
    }
    
    int findPages(vector<int>&arr,int n,int m)
    {
        if(m>n) return -1;

        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int students=countStudents(arr,mid);
            if(students>m)
            {
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
    
    int splitArray(vector<int>& nums, int k) 
    {
        int n=nums.size();
        return findPages(nums,n,k);
    }

main()
{
    vector<int>arr={7,2,5,10,8};
    int k=2;
    cout<<splitArray(arr,k);
}