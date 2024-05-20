/*

A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship 
with packages on the conveyor belt (in the order given by weights). 
We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the 
conveyor belt being shipped within days days.

Example 1:

Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
Output: 15
Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days 
like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10

Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and 
splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.
Example 2:

Input: weights = [3,2,2,4,1,4], days = 3
Output: 6
Explanation: A ship capacity of 6 is the minimum to ship all the packages in 3 days like this:
1st day: 3, 2
2nd day: 2, 4
3rd day: 1, 4
Example 3:

Input: weights = [1,2,3,1,1], days = 4
Output: 3
Explanation:
1st day: 1
2nd day: 2
3rd day: 3
4th day: 1, 1

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// *******************************Brute Force Solution***********************************

/*

NOTE: 85 test cases passed out of 88....at the 86 test case we got the TLE (Time limit exceeded)
To solve this problem we need to optimize this solution by applying the binary search on the 
speficied limit.

int funct(vector<int>&wght,int cap)
    {
        int days=1;int load=0;

        for(int i=0;i<wght.size();i++)
        {
            if(load+wght[i]>cap)
            {
                days=days+1;
                load=wght[i];
            }
            else{
                load+=wght[i];
            }
        }
        return days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=0;int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            maxi=max(weights[i],maxi);
            sum+=weights[i];
        }
        
        for(int cap=maxi;cap<=sum;cap++)
        {
            int daysReq=funct(weights,cap);
            if(daysReq<=days) return cap;
        }
        return -1;
    }

*/

//***************Optimized solution with all test cases passed************************ 


int funct(vector<int>&wght,int cap)
    {
        int days=1;int load=0;

        for(int i=0;i<wght.size();i++)
        {
            if(load+wght[i]>cap)
            {
                days=days+1;
                load=wght[i];
            }
            else{
                load+=wght[i];
            }
        }
        return days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end()); //find the maximum element in the array
        int high=accumulate(weights.begin(),weights.end(),0);  //calculate the sum 
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            int ReqDays=funct(weights,mid);
            if(ReqDays<=days) high=mid-1;
            else low=mid+1;
        }

        return low;
    }

main(){
int n;
cin>>n;
vector<int> arr={3,2,2,4,1,4};
int days=5;

int res=shipWithinDays(arr,days);
cout<<res;

return 0;
}