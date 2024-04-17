/*
You are given a 0-indexed integer array nums of length n.

nums contains a valid split at index i if the following are true:

The sum of the first i + 1 elements is greater than or equal to the sum of the last n - i - 1 elements.
There is at least one element to the right of i. That is, 0 <= i < n - 1.
Return the number of valid splits in nums.

Example 1:

Input: nums = [10,4,-8,7]
Output: 2
Explanation: 
There are three ways of splitting nums into two non-empty parts:
- Split nums at index 0. Then, the first part is [10], and its sum is 10. The second part is [4,-8,7], and its sum is 3. Since 10 >= 3, i = 0 is a valid split.
- Split nums at index 1. Then, the first part is [10,4], and its sum is 14. The second part is [-8,7], and its sum is -1. Since 14 >= -1, i = 1 is a valid split.
- Split nums at index 2. Then, the first part is [10,4,-8], and its sum is 6. The second part is [7], and its sum is 7. Since 6 < 7, i = 2 is not a valid split.
Thus, the number of valid splits in nums is 2.
*/

#include<bits/stdc++.h>
using namespace std;

 int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
    for(int i=0;i<nums.size();i++)
    {
    sum+=nums[i];
    }

    long long lsum=0,count=0;
    for(int i=0;i<nums.size()-1;i++)
    { 
    lsum+=nums[i];
    sum-=nums[i];
    if(lsum>=sum) count++;

    }
    return count;
    }

int main()
{
    vector<int>arr={2,3,1,0};
   int res= waysToSplitArray(arr);
   cout<<res;
   return 0;
}