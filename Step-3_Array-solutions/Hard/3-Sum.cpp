#include<iostream>
#include "functions.cpp"
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int need=nums.size()/3+1;
    vector<int> ans;
    int cnt1=0,cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;

       for(int i=0;i<nums.size();i++){
           if(cnt1==0 && nums[i]!=el2){
               el1=nums[i];
               cnt1++;
           }
           else if(cnt2==0 && nums[i]!=el1){
               cnt2++;
               el2=nums[i];
           }
           else if(nums[i]==el1) cnt1++;
           else if(nums[i]==el2) cnt2++;
           else{
               cnt1--;cnt2--;
           }
       }

       //now manual checking
       cnt1=0,cnt2=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==el1) cnt1++;
           if(nums[i]==el2) cnt2++;
       }
       if(cnt1 >= need ) ans.push_back(el1);
       if(cnt2 >= need) ans.push_back(el2);
        return ans;
    }


main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,n);
vector<int>result=    majorityElement(arr);
for(auto it: result){
    cout<<it;
}

return 0;
}