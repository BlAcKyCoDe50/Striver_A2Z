// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int Kcount(vector<int>&arr,int k)
{
    unordered_map<int,int>mpp;
    for(auto i:arr){
        mpp[i]++;
    }
    for(auto& it:mpp){
        if(it.second==k) return it.first;
    }
    return -1;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int res=Kcount(arr,k);
    cout<< res;
}