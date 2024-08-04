   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

  
void findSubarray(int start,vector<int>&ans,vector<int>&arr)
    {
        if(start==arr.size())
        {
            return;
        }
        int cursum =0;
        for(int i=start;i<arr.size();i++)
        {
            cursum+=arr[i];
            ans.push_back(cursum);
        }
        findSubarray(start+1,ans,arr);
    }

    int rangeSum(vector<int>& nums, int n, int left, int right) 
    {
        const int MOD = 1e9 + 7;
        vector<int>ans;
        findSubarray(0,ans,nums);
        sort(ans.begin(),ans.end());
        long long  sum = 0;
        for(int i=left-1;i<=right;i++)
        {
            (sum+=ans[i])%MOD;
        }
        return (int)sum;
    }
main(){
 
 vector<int> arr = {1,2,3,4};
cout<<rangeSum(arr,arr.size(),1,4);


 return 0;
 }