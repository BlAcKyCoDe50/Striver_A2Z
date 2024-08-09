#include<bits/stdc++.h>
using namespace std;


class neighborSum {
   private:
    vector<vector<int>> grid;
public:
    neighborSum(vector<vector<int>>& grid ) : grid(grid) {}
    
    int adjacentSum(int value) 
    {
        int sum=0;
        int row = grid.size();
        int col  = grid[0].size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==value)
                {
                  if(i>0)  sum+=grid[i-1][j];
                  if(j>0)  sum+=grid[i][j-1];
                  if(j<col-1)  sum+=grid[i][j+1];
                  if(i<row-1)   sum+=grid[i+1][j];
                  return sum;
                }
            }
        }
        
    }
    
    int diagonalSum(int value) 
    {
        int sum=0;
        int row = grid.size();
        int col  = grid[0].size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==value)
            {
            if(i>0 && j> 0 ) sum+=grid[i-1][j-1]; //top left
            if(i>0 && j< col-1) sum+=(grid[i-1][j+1]); 
            if(j>0 && i<row-1) sum+=(grid[i+1][j-1]);
            if(i<row-1 && j<col-1) sum+=(grid[i+1][j+1]);
             return sum;
            }
            }
        }
       
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */

int main()
{
    vector<vector<int>> arr = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
 };

}