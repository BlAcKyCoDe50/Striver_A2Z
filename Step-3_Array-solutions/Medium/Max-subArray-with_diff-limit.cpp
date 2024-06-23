/*

Given an array of integers nums and an integer limit, return the size of the longest 
non-empty subarray such that the absolute difference between any two elements of this 
subarray is less than or equal to limit.

 

Example 1:

Input: nums = [8,2,4,7], limit = 4
Output: 2 
Explanation: All subarrays are: 
[8] with maximum absolute diff |8-8| = 0 <= 4.
[8,2] with maximum absolute diff |8-2| = 6 > 4. 
[8,2,4] with maximum absolute diff |8-2| = 6 > 4.
[8,2,4,7] with maximum absolute diff |8-2| = 6 > 4.
[2] with maximum absolute diff |2-2| = 0 <= 4.
[2,4] with maximum absolute diff |2-4| = 2 <= 4.
[2,4,7] with maximum absolute diff |2-7| = 5 > 4.
[4] with maximum absolute diff |4-4| = 0 <= 4.
[4,7] with maximum absolute diff |4-7| = 3 <= 4.
[7] with maximum absolute diff |7-7| = 0 <= 4. 
Therefore, the size of the longest subarray is 2.
Example 2:

Input: nums = [10,1,2,4,7,2], limit = 5
Output: 4 
Explanation: The subarray [2,4,7,2] is the longest since the maximum absolute diff is |2-7| = 5 <= 5.
Example 3:

Input: nums = [4,2,2,2,4,4,2,2], limit = 0
Output: 3

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums, int limit) 
    {
        int len=0;
        for(int i=0;i<nums.size();i++)
        {
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for(int j=i;j<nums.size();j++)
            {
               mini=min(mini,nums[j]);
               maxi=max(maxi,nums[j]);
               if(maxi-mini <= limit)
               {
                len=max(len,j-i+1);
               }
               else break;
            }
        }
        return len;    
    }

main(){
vector<int> arr={10,1,2,4,7,2};
int lim8t=5;

cout<<longestSubarray(arr,lim8t);

return 0;
}