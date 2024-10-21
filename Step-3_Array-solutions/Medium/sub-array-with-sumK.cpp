#include<iostream>
#include<vector>
#include<map>
#include <bits/stdc++.h>
using namespace std;

//   *****************Better Solution*********************
  
    // int subarraySum(vector<int>& nums, int s) {
    //     int sumcount=0;
    //     int n=nums.size();
    //     for(int i=0;i<nums.size();i++){
    //        int sum=0;
    //         for(int j=i;j<n;j++){
    //             sum=sum+nums[j];
    //             if(sum==s){
    //             sumcount++;
    //             }
    //             }
    //         }
    //     return sumcount;
    // }

//***********************optimal approach************

int subarraySum(vector<int>& arr, int k) {

    int n=arr.size();
    int count=0;
    int sum=0;
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];   //sum calculate kiya
        if(sum==k) count++;
        else if(mp.find(sum-k) != mp.end())
        {           //agar sum-k ki value map mae h to count mae wo value ka count add kr de
            count=count+mp[sum-k];  //like mp[sum-k] ka mtlb mp mae jo bhi value h uska count add hoga
        }
        mp[sum]++; //nhi to us sum ko add kr k uska count ya value bdaa de 
    }
    return count;

}


main(){
int n;
// cin>>n;
vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
cout<<subarraySum(arr,7);

return 0;
}