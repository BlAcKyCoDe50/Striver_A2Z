/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Example 1:
Input: nums = [3,2,3]
Output: [3]
Example 2:
Input: nums = [1]
Output: [1]
Example 3:
Input: nums = [1,2]
Output: [1,2]
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// vector<int> majorityElement(vector<int>& arr) {
//         int max=1;
//         int count1=arr.size()/3;
//         vector<int> ans;
//         int count2=0;
//         int maxi=0;    
//         for(int i=0;i<arr.size();i++){
//            int count=0;
//             if(ans.size()==0 || ans[0]!=arr[i]){
//                 for(int j=0;j<arr.size();j++){
//                     if(arr[j]==arr[i]) count++;
//             }
//             if(count>count1) ans.push_back(arr[i]);
//             }
//             if(ans.size()==2) break;
//         }
//         return ans;
// }

//***********Better Solution***************************

//  vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans;
//         int min_required=nums.size()/3+1;
//         map<int,int>mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++; // like  it will update the value and key both
//             if(mp[nums[i]]==min_required){
//                 ans.push_back(nums[i]);
//             }
            
//             if(ans.size()==2) break;
            
//             }
//     return ans;
//     }
// ***************Optimal solution**********************
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

return 0;
}
