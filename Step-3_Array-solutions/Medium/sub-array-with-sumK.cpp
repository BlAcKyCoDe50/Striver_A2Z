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

int subarraySum(vector<int>& arr, int s) {

    int n=arr.size();
    int count=0;
    int sum=0;
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        if(sum==s) count++;
        else if(mp.find(sum-s) != mp.end()){
                count=count+mp[sum-s];
        }
        mp[sum]++;
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