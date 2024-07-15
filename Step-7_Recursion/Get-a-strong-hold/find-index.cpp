   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    int findIndex(vector<int>&arr,int target,int i)
    {
        if(arr[i]==target) return i;

        findIndex(arr,target,i+1);
        return -1;
    }

main(){

vector<int> arr= {1,2,3,4};
int target = 10;

cout<<findIndex(arr,target,0);
 return 0;
 }