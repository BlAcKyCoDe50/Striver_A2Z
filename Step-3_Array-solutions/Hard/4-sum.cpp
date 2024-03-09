#include<iostream>
#include<bits/stdc++.h>
#include "functions.cpp"
using namespace std;


/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
*/


//*****************brute force************************
/*
vector<vector<int>> fourSum(vector<int>& arr, int target) {
    set<vector<int>> ans;
    
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            for(int k = j + 1; k < arr.size(); k++) {
                for(int l = k + 1; l < arr.size(); l++) {
                    long long sum=arr[i]+arr[j];
                    sum+=arr[k];
                    sum+=arr[l]; //we are not summing up in one lines because it exceeds the datatype value
                    if(sum==0){
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    }
                }
            }
        }
        vector<vector<int>>result(ans.begin(), ans.end());;
        return result;
    }
*/

// **************better approach*********************

/*
vector<vector<int>> fourSum(vector<int>& arr, int target) {
  set<vector<int>> ans;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            set<int>stt;
            for(int k = j + 1; k < arr.size(); k++) {
            long long sum=arr[i]+arr[j];
            sum+=arr[k];
            long long fourth=target-sum;
                    if(stt.find(fourth) != stt.end()){
                        vector<int> temp = {arr[i], arr[j], arr[k],(int)fourth};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    stt.insert(arr[k]);
                    }
                }
            }
            vector<vector<int>>result(ans.begin(), ans.end());;
        return result;
        }
*/



vector<vector<int>> fourSum(vector<int>& arr, int target) {
  vector<vector<int>> ans;
  sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++) {
    if(i>0 && arr[i] == arr[i-1]) continue; //checking the duplicates...previous value to nhi checking
    for(int j = i + 1; j < arr.size(); j++) {
        if(j != i+1 && arr[j] == arr[j-1]) continue;
        int k=j+1;
        int l=arr.size()-1;
        while(k<l){
            long long sum=arr[i];
            sum+=arr[j];
            sum+=arr[k];
            sum+=arr[l];
            if(sum==target){
                vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                ans.push_back(temp);
                k++,l--;
                while(k<l && arr[k]==arr[k-1]) k++;
                while(k<l && arr[l]==arr[l+1]) l--;

            }
            else if(sum<target) k++;
            else l--;
        }
        }
        }
          vector<vector<int>>result(ans.begin(), ans.end());;
        return result;
}   





main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,n);
vector<vector<int>> res =fourSum(arr,0);
for (auto& vec : res) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}


return 0;
}