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


main(){
int n;
cin>>n;
vector<int> arr(n);
//In the first type we have rows and columns given, just calculate their nCr.


return 0;
}