/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

You must write a solution in O(log(m * n)) time complexity.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// ******************brute force***************************

// int search(vector<int>&arr,int target)
// {
//     int n= arr.size();
//     int m=arr[0].size();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(arr[i][j]==target) return true;
//         }
        
//     }
    
// }

// *************************Optimal Solution 1**********************

//Basically we are checking every row that the is the row[0] element < target
// and row[end] element is < target 
// if it does then we applied the binary search on that row

 bool BS(vector<int>&arr,int target)
    {
        int low=0;int high=arr.size();
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target) return true;
            else if(target>arr[mid]) low=mid+1;
            else high=mid-1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& arr, int target)
    {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++)
        {
            if(arr[i][0]<=target && target <= arr[i][m-1]) return BS(arr[i],target);
        }
        return false;
    }


//**************optimal solution 2****************

 bool searchMatrix(vector<vector<int>>& arr, int target)
 {
        int n=arr.size();
        int m=arr[0].size();
        int low=0;int high=n*m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(arr[row][col]==target) return true;
            if(arr[row][col]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
 }
main(){
int n;
cin>>n;
vector<vector<int>>arr={{1,3,5,7},{10,11,16,20}};
cout<<searchMatrix(arr,5);
return 0;
}
