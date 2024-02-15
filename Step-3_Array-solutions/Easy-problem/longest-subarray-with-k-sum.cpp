#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include "functions.cpp"
using namespace std;

//Brute force approach

// int longestSubarray(vector<int>&arr,int summm){
//    int len = 0;
//     for (int i = 0; i < arr.size(); i++) {
//         int sum = 0; // Initialize sum for each subarray
//         for (int j = i; j < arr.size(); j++) {
//             sum += arr[j];
//             if (sum == summm) {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     return len;
// }

//Better approach

int longestSubarray(vector<int> arr,long k){
    map<long long,int> presum;
    long long sum=0;
    int maxLen=0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum=sum+arr[i];
        if (sum==k)
        {
         maxLen=i+1;   
        }
        long long rem=sum-k;
        if(presum.find(rem)!=presum.end()){
            int len=i-presum[rem];
            maxLen=max(maxLen,len);
        }
        if (presum.find(sum)==presum.end())
        {
            presum[sum]=i;
        }
        
    }
    return maxLen;   
}


main(){
int n;
cin>>n;

vector<int> arr(n);
array_insertion(arr,n);
cout<<"Subarray is: "<<longestSubarray(arr,6);

return 0;
}