/*
Pascal triangle is the triangle where the element below is the sum of the 
above two elements. (check the diagram on the leet code prob 118)

So there are mainly 3 types of problems in the pascal triangle
 1. Given row & column ,fint the element at that place.
 ex: r=5,c=3 ,ans: 6

 2.Print any nth row of pascal triangle (n=5,so print the 5th row)
 3. Given n,print the entire traingle. (n=5, print the whole traingle)
*/

//So here is the Solution of the first type of Prob.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    int res=1;
    for (int i = 0; i < r; i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

void printNthRow(int n){
    for (int i = 1; i < n; i++)
    {
        cout<<nCr(n-1,i)<<" ";
    }
    
}

void printNpascal(int n){
        vector<vector<int>>res(n);
        for(int i=0;i<n;i++){
            res[i]=vector<int>(i+1,1);
            for(int j=1;j<i;j++){
                res[i][j]=res[i-1][j]+res[i-1][j-1];  //res[upper row][same column]+res[upper row][left column]
            }
        }
        //printing the triangle
        for(int i=0;i<res.size();i++){
            for (int j = 0; j < i; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;   
        }
    }

main(){
int n;
cin>>n;
printNpascal(n);
cout<<endl;
cout<<"***************************"<<endl;
printNthRow(6);
//In the first type we have rows and columns given, just calculate their nCr.



return 0;
}