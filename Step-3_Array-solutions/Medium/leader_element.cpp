// Given an integer array a of size n, find and return all the Superior Elements, 
// which are elements greater than all the elements to their right. The last element of 
// the array is always a Superior Element. The output should be 
// sorted in ascending order. For example, 
// given a = [1, 2, 3, 2], the output would be 2 3, as a[2] = 3 
// is greater than a[3], and a[3] = 2 is the last element.


#include<bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int>&arr) {
    // Write your code here.
    vector<int> ans;
    int maxi=0;
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
 sort(ans.begin(),ans.end());

 return ans;

}
