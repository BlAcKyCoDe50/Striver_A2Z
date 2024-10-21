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

// *************Optimized Solution************
    // void findSubset(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    // {
    //    ans.push_back(ds); 
    //     for(int i=index;i<nums.size();i++)
    //     {
    //         if(i!=index && nums[i]==nums[i-1]) continue;
    //         ds.push_back(nums[i]);
    //         findSubset(i+1,nums,ds,ans);
    //         ds.pop_back();
    //     }
    // }
    
    // vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    // {
    //    vector<vector<int>>ans;
    //    vector<int>ds;
    //    sort(nums.begin(),nums.end());
    //    findSubset(0,nums,ds,ans);
    //    return ans; 
    // }
   
main(){
 
 vector<int> arr = {1,2,2};
subsetsWithDup(arr);

 return 0;
 }