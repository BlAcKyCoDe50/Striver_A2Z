/*

Given an array of integers nums and an integer threshold, we will choose a positive 
integer divisor, divide all the array by it, and sum the division's result. 
Find the smallest divisor such that the result mentioned above is less than 
or equal to threshold.

Each result of the division is rounded to the nearest integer greater 
than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

The test cases are generated so that there will be an answer.

 

Example 1:

Input: nums = [1,2,5,9], threshold = 6
Output: 5
Explanation: We can get a sum to 17 (1+2+5+9) if the divisor is 1. 
If the divisor is 4 we can get a sum of 7 (1+1+2+3) and if the divisor is 5 the sum will be 5 (1+1+1+2). 

*/

#include<bits/stdc++.h>
using namespace std;

int sumByD(vector<int>&arr,int div)
    {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+ceil((double)(arr[i])/(double)(div));
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& arr, int threshold) 
    {
        
        int low=1,high=*max_element(arr.begin(),arr.end());
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(sumByD(arr,mid) <= threshold) high=mid-1;
                else low=mid+1;
            }   
        
        return low;
    }

int main()
{
    vector<int> arr = {1,2,5,9};
    int threshold=6;

    int res=smallestDivisor(arr,threshold);
    cout<<res;
}