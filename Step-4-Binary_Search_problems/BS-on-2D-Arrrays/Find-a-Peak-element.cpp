/*

A peak element in a 2D grid is an element that is strictly greater than all of its 
adjacent neighbors to the left, right, top, and bottom.

Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, 
find any peak element mat[i][j] and return the length 2 array [i,j].
You may assume that the entire matrix is surrounded by an outer perimeter 
with the value -1 in each cell.

Input: mat = [[1,4],[3,2]]
Output: [0,1]
Explanation: Both 3 and 4 are peak elements so [1,0] and [0,1] are both acceptable answers.

You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 int findmax(vector<vector<int>>& arr,int n,int m,int col)
    {
        int index=-1;
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i][col]>maxi)
            {
                maxi=arr[i][col];
                index=i;
            }
        }
        return index;
    }
 
 vector<int> findPeakGrid(vector<vector<
 int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        int low=0;int high=m-1;
        int left=-1,right=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            // cout<<"working"<<endl;
            int row=findmax(arr,n,m,mid);
            // cout<<"working"<<endl;
            left=mid-1>=0 ? arr[row][mid-1]:-1;
            // cout<<"working"<<endl;
            // *******Simple**********
            // if(mid-1>=0) left=arr[row][mid-1];
            // else left=-1;
            // same for right
            // if(mid+1<m) right=arr[row][mid+1];
            right=mid+1 < m ? arr[row][mid+1]:-1;
            // cout<<"working"<<endl;
            if(arr[row][mid] > left && arr[row][mid] > right) return {row,mid};
            else if(arr[row][mid] < left ) high=mid-1;
            else low=mid+1;
        }
       
        return {-1,-1};
    }

main(){

vector<vector<int>>arr={{1,4},{3,2}};
vector<int>res=findPeakGrid(arr);

for(auto it: res) cout<<res[it]<<" ";

return 0;
}