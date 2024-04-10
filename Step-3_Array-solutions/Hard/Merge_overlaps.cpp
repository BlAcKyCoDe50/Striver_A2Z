/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int start=arr[i][0];
            int end=arr[i][1];
            if(!ans.empty() && end<=ans.back()[1]) continue;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j][0]<=end){
                    end=max(end,arr[j][1]);
                }
                else break;
            }
            ans.push_back({start,end});
        }
        return ans;
}