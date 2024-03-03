#include<iostream>
#include<bits/stdc++.h>
#include "functions.cpp"
using namespace std;


int rotateMatrix(vector<vector<int>> & arr){
    int n=arr.size();
    //transpose the matrix

    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    //reverse the matrix
    for (int i = 0; i < n; i++)
    {
        // every row is arr[i]
        reverse(arr[i].begin(),arr[i].end());
    }
    
    
}

main(){
    int n;
    cin>>n;
   vector<vector<int>> arr(n, vector<int>(n));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"   "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"***************************************** "<<endl;
    rotateMatrix(arr);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}