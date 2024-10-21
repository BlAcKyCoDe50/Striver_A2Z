   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    void printArray(vector<int>&arr,int i)
    {
        if(i<0) return;
        cout<<arr[i]<<" ";
        printArray(arr,i-1);  
    }

main(){
 vector<int> arr={1,2,3,4,5};

printArray(arr,arr.size()-1);
 return 0;
 }