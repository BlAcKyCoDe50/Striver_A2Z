// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
// Example 2:

// Input: nums1 = [1], m = 1, nums2 = [], n = 0
// Output: [1]
// Explanation: The arrays we are merging are [1] and [].
// The result of the merge is [1].
// Example 3:

// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]
// Explanation: The arrays we are merging are [] and [1].
// The result of the merge is [1].
// Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
       int left=0;
       int right=0;
       int index=0;
       vector<int> arr3;
       while(left<n && right<m){
        if(arr1[left]<=arr2[right]){
            arr3[index]=arr1[right];
            index++;left++;
        }
        else{
            arr3[index]=arr2[right];
            right++;index++;
        }
        }
        while(left<n){
            arr3[index]=arr1[left];
            index++;left++;
        }
        while(right<m){
            arr3[index]=arr2[right];
            right++;index++;
        }

        for(int i=0;i<m+n;i++){
            if(i<n) arr1[i]=arr3[i];
            else arr2[i-n]=arr3[i];
        }
       }
};  