#include<iostream>
using namespace std;
#include<vector>
#include "functions.cpp"

void sortedArray(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();

    int i=0;
    int j=0;
    vector<int> unionarr;
    while (i<n1 && j<n2)
    {
        if (a[i]<=b[i])
        {
            if (unionarr.size()==0 || unionarr.back()!=a[i])
            {
                unionarr.push_back(a[i]);
            }
            i++;
        }

        else{
            if (unionarr.size()==0 || unionarr.back()!=b[j])
            {
                unionarr.push_back(b[j]);
            }
            j++;
        }
        
    }
while (j<n2)
{
     if (unionarr.size()==0 || unionarr.back()!=b[j])
            {
                unionarr.push_back(b[j]);
            }
        j++;
}

while (i<n1)
{
    if (unionarr.size()==0 || unionarr.back()!=a[i])
    {
        unionarr.push_back(a[i]);
    }
    i++;
}


    int s=unionarr.size();
    printArray(unionarr,s);
    
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