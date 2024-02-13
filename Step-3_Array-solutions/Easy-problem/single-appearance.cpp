#include<iostream>
#include<vector>
#include "functions.cpp"
using namespace std;

int singleApperance(vector<int>&arr){
    int xorr=0;
    for (int i = 0; i < arr.size(); i++)
    {
       xorr=xorr ^ arr[i];
    }
    return xorr;
    
}

main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,n);
cout<<"Single appearance of number is: "<<singleApperance(arr);

return 0;
}