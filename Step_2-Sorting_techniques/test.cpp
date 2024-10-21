#include<iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;

    void SelectionSort(vector<int>&arr)
    {
        for (int i = 0; i < arr.size()-1; i++)
        {
            int mini = i;
            for(int j=i;j<arr.size();j++)
            {
                if(arr[j]<arr[mini])
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }

    void BubbleSort(vector<int>&arr)
    {
        
    }

main(){
    vector<int> arr = {10,1,5,100,2};
    SelectionSort(arr);
    for(auto it: arr) cout<<it<<" ";

}
