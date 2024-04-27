// Problem statement
// Given an array of distinct integers, find all the pairs having positive value and negative value of a number that exists in the array. Return the pairs in any order.

// Note:
// The pair consists of equal absolute values, one being positive and another negative.

// Return an empty array, if no such pair exists.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 50
// 1 <= N <= 10^4
// -10^5 <= A[i] <= 10^5

// Time Limit: 1 second
// Sample Input 1:
// 2
// 2
// -2 2
// 2
// 1 2
// Sample Output 1:
// -2 2
// Explanation For Sample Output 1:
// Test case 1:
// In the first test case, we can see that the absolute values of -2 and 2 are the same. But their signs are different(positive and negative). So that’s our answer. 

// Test case 2:
// There is no number present in the array with both positive and negative values. 
// Sample Input 2:
// 2
// 6
// 1 -3 2 3 6 -1
// 8
// 4 8 9 -4 1 -1 -8 -9
// Sample Output 2:
// -1 1 -3 3
// -1 1 -4 4 -8 8 -9 9

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> pairs(vector<int> &arr, int n) {
    // Write your code here
    
    //*************brute force**************
    // for(int i=0;i<arr.size();i++)
    // {
    //     // cout<<"arr[i]"<<arr[i]<<endl;
    //     for(int j=arr.size()-1;j>i;j--)
    //     {
    //         // cout<<"arr[j]:"<<arr[j]<<endl;
    //         if(abs(arr[i])==abs(arr[j]))
    //         {
    //             ans.push_back(make_pair(arr[i],arr[j]));
    //         } 
    //     }
    // }
    // return ans;

    // **********optimal approach****************
    vector<pair<int, int>> ans;
    sort(arr.begin(),arr.end());
    int low=0;int high=arr.size()-1;
    while(low<high)
    {
        if((abs(arr[low]))==(arr[high]))
        {
         ans.push_back(make_pair(arr[low],arr[high]));   
         high--;low++;
        }
        else if(abs(arr[low]) < (arr[high]))
        {
            high--;
        }
        else low++;
        
    }
    return ans;

}

main(){
int n;
// cin>>n;
vector<int> arr={4, 8 ,9 ,-4 ,1 ,-1, -8 ,-9};
n=arr.size()-1;
vector<pair<int, int>> res=pairs(arr,n);

for(const auto& p: res){
    cout<<p.first<<" "<<p.second;
}
return 0;
}