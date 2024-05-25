/*

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr3;
        int i=0,j=0;
        int n1=nums1.size();int n2=nums2.size();

        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j]) arr3.push_back(nums1[i++]);
            else arr3.push_back(nums2[j++]);
        }
            
        while(i<n1) arr3.push_back(nums1[i++]);
        while(j<n2) arr3.push_back(nums2[j++]);
        int n=(n1+n2);

        if(n%2==1) return arr3[n/2];

        return (double)((double)(arr3[n/2])+(double)(arr3[n/2-1]))/2.0;
    }

main(){
int n;
cin>>n;
vector<int> arr={1,2};
vector<int> arr2={3,4};
cout<<findMedianSortedArrays(arr,arr2);
return 0;
}