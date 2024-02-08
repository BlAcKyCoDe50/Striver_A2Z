#include<iostream>
#include <vector>
#include "functions.cpp"
using namespace std;

void merge(vector<int> arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
    }
    for (int i = low; i < high; i++)
    {
      arr[i]=temp[i-low];
    }
    
}

void mS(vector<int> & arr,int low,int high){
    if (low<=high)
    {
        return;
    }
    int mid=low+high/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}

void mergeSort(vector<int>&arr,int n){
    mS(arr,0,n-1);
}

main(){
int n;
cin>>n;
vector<int> arr;
// array_insertion(arr,n);
for (int i = 0; i < n; i++)
{
    arr.push_back(i);
}

mergeSort(arr,n);

return 0;
}