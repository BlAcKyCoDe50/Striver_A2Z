#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include "functions.cpp"

double centredAvg(vector<int> &arr){
    int maxi=arr[0],min=arr[0];
   for (int i = 0; i < arr.size(); i++)
   {
    if (arr[i]<min)
    {
        min=arr[i];
    }
    if(arr[i]>maxi)  maxi=arr[i];
   }
    
  arr.erase(find(arr.begin(),arr.end(),min));
  arr.erase(find(arr.begin(),arr.end(),maxi));

  double sum=0;
  for(auto it:arr){
    sum=sum+it;
  }
return sum/arr.size();
   
}

main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,arr.size());
cout<<centredAvg(arr);
return 0;
}