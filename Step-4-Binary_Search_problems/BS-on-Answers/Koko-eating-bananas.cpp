/*

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] 
bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some 
pile of bananas and eats k bananas from that pile. If the pile has less than k 
bananas, she eats all of them instead and will not eat any more bananas during 
this hour.

Koko likes to eat slowly but still wants to finish eating all the 
bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

 

Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], h = 5
Output: 30

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
     int findmax(vector<int>& arr) {
        int maxi = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int> &arr, int hourly) {
        long long totalH = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int hour = ceil((double)arr[i] / double(hourly));
            totalH = totalH + (long long)hour; 
        }
        return totalH;
    }
    
    int minEatingSpeed(vector<int>& arr, int h) {
        int low = 1, high = findmax(arr);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long totalH = calculateTotalHours(arr, mid);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

main(){
int n;
cin>>n;
vector<int> arr(n);

return 0;
}