#include<bits/stdc++.h>
#include "functions.cpp"
using namespace std;

void AllPermutations(vector<int>&arr){
    int index1=0,index2=0;
    int n=arr.size();
    for(int i=n;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index1=arr[i];
            break;
        }
    }
    for (int i = n; i >=0; i--)
    {
       if(arr[i]>index1){
        index2=arr[i];
        break;
       }
    }
    swap(index1,index2);
    reverse(index1+1,n);
 for(auto it:arr){
    cout<<it<<" ";
 }
}

main(){
int n; cin>>n;
 vector<int>arr(n);
 
 AllPermutations(arr);

}