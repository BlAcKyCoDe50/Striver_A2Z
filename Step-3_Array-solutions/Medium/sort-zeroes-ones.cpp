#include<iostream>
#include<vector>
#include "functions.cpp"
#include <bits/stdc++.h>
using namespace std;


void sortColors(vector<int>& nums,int n) {
    int low=0,mid=0;
    int high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;mid++;
        }
        else if(nums[mid]==1) 
            mid++;
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
        }
    }


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    array_insertion(arr,n);
    sortColors(arr,n);
    printArray(arr,n);
}