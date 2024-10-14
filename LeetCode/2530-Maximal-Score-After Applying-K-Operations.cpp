/*

2530. Maximal Score After Applying K Operations

You are given a 0-indexed integer array nums and an integer k. You have a starting score of 0.

In one operation:

choose an index i such that 0 <= i < nums.length,
increase your score by nums[i], and
replace nums[i] with ceil(nums[i] / 3).
Return the maximum possible score you can attain after applying exactly k operations.

The ceiling function ceil(val) is the least integer greater than or equal to val.

 

Example 1:

Input: nums = [10,10,10,10,10], k = 5
Output: 50
Explanation: Apply the operation to each array element exactly once. The final score is 10 + 10 + 10 + 10 + 10 = 50.
Example 2:

Input: nums = [1,10,3,3,3], k = 3
Output: 17
Explanation: You can do the following operations:
Operation 1: Select i = 1, so nums becomes [1,4,3,3,3]. Your score increases by 10.
Operation 2: Select i = 1, so nums becomes [1,2,3,3,3]. Your score increases by 4.
Operation 3: Select i = 2, so nums becomes [1,1,1,3,3]. Your score increases by 3.
The final score is 10 + 4 + 3 = 17.
 

Constraints:

1 <= nums.length, k <= 105
1 <= nums[i] <= 109

*/

   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    
    //brute force solution
    /*
    
    int findmax(vector<int>&nums)
    {
        int maxindex = 0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi = nums[i];
                maxindex = i;
            }
        }
        return maxindex;
    }

    long long maxKelements(vector<int>& nums, int k) 
    {
        long long score = 0;
        
        while(k!=0)
        {
            int maxiindex = findmax(nums);
            int maxi = nums[maxiindex];
            cout<<maxi<<endl;
            score+=maxi;
            nums[maxiindex] = ceil(nums[maxiindex]/3.0);  //why not 3 because ceil(nums[i]/3) will give integer division, But the ciel(nums[i]/3.0) will give a float value that will be converter into ceil value
            cout<<"nums[i]: "<<nums[maxiindex]<<endl;;
            k--;
        }

        return score;
    }
*/

//Optimized solution

long long maxKelements(vector<int>& nums, int k) 
    {
    //used max heap to get the maximum element in O(1) time complexity
        long long sum = 0;
        priority_queue<int> pq(nums.begin(),nums.end()); //heapify O(n) 

        while(k--)
        {
            int maxEl = pq.top();
            pq.pop();
            sum+=maxEl;
            maxEl = ceil(maxEl/3.0); // 
            pq.push(maxEl);
        }    
        return sum;
    }




main(){
 
 vector<int>arr = {10,10,10,10,10};
 int k = 5;
 cout<<maxKelements(arr,k);

 return 0;
 }