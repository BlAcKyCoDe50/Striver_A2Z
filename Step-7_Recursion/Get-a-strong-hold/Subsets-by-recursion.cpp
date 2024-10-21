/*

Given an integer array nums of unique elements, return all 
possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. 
\Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]

*/

   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

   vector<vector<int>> result;

    void solve(int i,vector<int>&nums,vector<int>temp)
    {
        if(i>=nums.size()){
            result.push_back(temp);
            return ;
        }

        temp.push_back(nums[i]); //take
        solve(i+1,nums,temp); //we trust the recursion.
        temp.pop_back();
        solve(i+1,nums,temp); //not take 
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int>temp;

        solve(0,nums,temp);
        return result;
    }
main(){
 

 return 0;
 }