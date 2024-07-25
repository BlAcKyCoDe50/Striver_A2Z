   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    void fun(int i,int sum,vector<int>&arr,int n,vector<int>&ans)
    {
        if(i==arr.size())
        {
            ans.push_back(sum);
            return;
        }

        fun(i+1,sum+arr[i],arr,n,ans);
        fun(i+1,sum,arr,n,ans);
    }

    vector<int>subsetsums(vector<int>&arr,int n)
    {
        vector<int>ans;
        fun(0,0,arr,arr.size(),ans);
        return ans;
    }

main(){
 
vector<int> arr = {5, 2, 1};

vector<int>res = subsetsums(arr,arr.size());
sort(res.begin(),res.end());
for(auto it : res)
{
    cout<<it<<" ";
}
 return 0;
 }