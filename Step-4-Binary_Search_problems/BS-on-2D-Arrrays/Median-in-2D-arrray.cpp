/*

Given a row wise sorted matrix of size R*C where R and C are always odd, 
find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]
Output: 5
Explanation: Sorting matrix elements gives 
us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 

Example 2:

Input:
R = 3, C = 1
M = [[1], [2], [3]]
Output: 2
Explanation: Sorting matrix elements gives 
us {1,2,3}. Hence, 2 is median.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//*************************Brute force****************************

 int median(vector<vector<int>> &matrix, int R, int C)
    {
        // code here
        vector<int>ans;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int low=0;int high=ans.size();
        int med=(low+high)/2;
        int res=ans[med];
        return res;
    }

main(){
int n;
cin>>n;
vector<vector<int>> matrix={{1, 3, 5},{2, 6, 9},{3, 6, 9}};
int r=3,c=3;
cout<<median(matrix,r,c);

return 0;
}