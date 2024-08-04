   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

void findSubset(int i,vector<int>&nums,vector<int>&ans,vector<vector<int>>&res)
    {
       if(i==nums.size())
       {
        res.push_back(ans);
        return;
       }
        ans.push_back(nums[i]);
       findSubset(i+1,nums,ans,res);
       ans.pop_back();
        findSubset(i+1,nums,ans,res);
    }
    
void subsetsWithDup(vector<int>& nums) 
    {
       vector<int>ans;
       vector<vector<int>>res;
       findSubset(0,nums,ans,res);
       set<int> st;
       for(int i=0;i<res.size();i++)
       {
        cout<<"[";
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";   
        }
        cout<<"]";
       }
    }
   
main(){
 
 vector<int> arr = {1,2,2};
subsetsWithDup(arr);

 return 0;
 }