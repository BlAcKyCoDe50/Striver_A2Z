/*

Given an array arr of positive integers sorted in a strictly increasing order, 
and an integer k.

Return the kth positive integer that is missing from this array.

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. 
The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. 
The 2nd missing positive integer is 6.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int findKthPositive(vector<int>& arr, int k) {
        int cnt=0;
        int miscnt=0;
        // if(arr[0]!=arr[1]-1) miscnt++;
        for(int i=0;i<arr.size();i++)
        {
           if(arr[i]<=k) k++;
        }
        return k;
    }

main(){
int n;
cin>>n;
vector<int> arr={2,3,4,7,11};
int k=5;
cout<<findKthPositive(arr,k);

return 0;
}