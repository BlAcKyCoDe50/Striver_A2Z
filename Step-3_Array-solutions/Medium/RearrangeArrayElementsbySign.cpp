#include<bits/stdc++.h>
#include "functions.cpp"
using namespace std;


 vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posarray,negarray;
        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) posarray.push_back(nums[i]);
            if(nums[i]<0) negarray.push_back(nums[i]);
        }
        int i = 0;
        for(int j = 0; j < posarray.size(); ++j) {
            result[i] = posarray[j];
            i += 2;
        }
        i = 1;
        for(int j = 0; j < negarray.size(); ++j) {
            result[i] = negarray[j];
            i += 2;
        }
    return result;
 }

 int main(){
    int n;cin>>n;
    vector<int>nums(n);
    array_insertion(nums,n);
    vector<int> result=rearrangeArray(nums);
   for(int i=0;i<result.size();i++)
    cout<<result[i]<<" ";
    return 0;
 }