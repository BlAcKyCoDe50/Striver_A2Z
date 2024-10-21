#include<iostream>
using namespace std;
#include<vector>
#include "functions.cpp"

void sortedArray(vector<int> a,vector<int> b){
     int n1=a.size();
    int n2=b.size();

    int i=0;
    int j=0;
    vector<int> ans;
   while(i<n1 && j<n2)
   {
        if (a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;j++;
        }
    }
    int s=ans.size();
    printArray(ans,s);
    
}

main(){
int n,n1;
cin>>n;
cin>>n1;
vector<int> arr(n);
vector<int> arr1(n1);
array_insertion(arr,n);
array_insertion(arr1,n1);
sortedArray(arr,arr1);

return 0;
}