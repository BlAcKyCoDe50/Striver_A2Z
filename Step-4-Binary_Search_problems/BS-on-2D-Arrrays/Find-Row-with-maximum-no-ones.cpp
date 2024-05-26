/*

Given a boolean 2D array of n x m dimensions, consisting of only 1's and 0's, where each row is sorted. 
Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:
Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

Example 2:
Input: 
N = 2, M = 2
Arr[][] = {{0, 0}, {1, 1}}
Output: 1
Explanation: Row 1 contains 2 1's (0-based
indexing).

Your Task:  
You don't need to read input or print anything. Your task is to complete the function rowWithMax1s() which takes the array 
of booleans arr[][], n and m as input parameters and returns the 0-based index of the first row that has the most number of 1s. 
If no such row exists, return -1.
Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>arr,int n,int x)
	{
	    int low=0,high=n-1;
	    int ans=n;
	    while(low<=high)
	    {
	      int mid=(low+high)/2;
	      if(arr[mid]>x)
	      {
	       //   ans=mid;
	          high=mid-1;
	      }
	   else if(arr[mid]==x){ ans=mid;high=mid-1;}
	      else low=mid+1;
	    }
	    return ans;
	}

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   // int maxi=0;
	   // int ans=-1;
	   // for(int i=0;i<n;i++)
	   // {
	   //     int sum=0;
	   //     for(int j=0;j<m;j++)
	   //     {
	   //         sum+=arr[i][j];
	   //     }
	   //     if(sum > maxi){
	   //         maxi = sum;
	   //         ans = i;
	   //     }
	        
	   // }
	   // return ans;
	   int cnt_max=0;
	   int index=-1;
	   for(int i=0;i<n;i++)
	   {
	       int cnt_ones=m-lowerBound(arr[i],m,1);
	       if(cnt_ones>cnt_max){
	           cnt_max=cnt_ones;
	           index=i;
	       }
	   }
	   return index;
	}

main(){
int n;
cin>>n;
vector<int> arr={};
return 0;
}