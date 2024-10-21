// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

#include<bits/stdc++.h>
#include "functions.cpp"
// #include <vector>
using namespace std;

//Better solution with O(n^2)
// int maxSubArray(vector<int> & arr){
//    int sum=0;
//    int maxi=INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum=0;
//         for (int j = i; j < arr.size(); j++)
//         {
//             sum=sum+arr[j];
//             maxi=max(maxi,sum);
//         }
       
//     }
//     return maxi;    
// }

//Optimal with O(n)
int maxSubArray(vector<int> & arr){
    int sum=0;
    int maxi=INT_MIN;
    for(auto it:arr){
        sum=sum+it;
        maxi=max(sum,maxi);
        if(sum<0) sum=0;
    }
    return maxi;
}


main(){
int n;
cin>>n;

vector<int> arr(n);
array_insertion(arr,n);
cout<<maxSubArray(arr)<<endl;
return 0;
}