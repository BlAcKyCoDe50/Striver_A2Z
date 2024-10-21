// Given an array ‘A’ consisting of ‘N’ integers and an integer ‘B’, find the number of subarrays of array ‘A’ whose bitwise XOR( ⊕ ) of all elements is equal to ‘B’.

// A subarray of an array is obtained by removing some(zero or more) elements from the front and back of the array.

// Example:
// Input: ‘N’ = 4 ‘B’ = 2
// ‘A’ = [1, 2, 3, 2]

// Output: 3

// Explanation: Subarrays have bitwise xor equal to ‘2’ are: [1, 2, 3, 2], [2], [2].

// *********************************************************************************

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector < int > A, int b) {
    // Write your code here
     int count=0;
    for(int i=0;i<A.size();i++){
        int x=0;
        for(int j=i;j<A.size();j++){
            x=x^A[j];
            if(x==b) count++;
        }
    }
    return count;
}