
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
int secondlargest(vector<int>&arr,int n){
    int flargest=arr[0];
    int slargest=arr[-1];
    for(int i=0; i<n; i++){
        if(arr[i]>flargest){
            slargest=flargest;
            flargest=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<flargest && arr[i]<slargest){
            arr[i]=slargest;
        }
    }
    
return slargest;
}

int ssmallest(vector<int> arr,int n){
    int fsmallest=arr[0];
    int ssmallest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<fsmallest){
            ssmallest=fsmallest;
            fsmallest=arr[i];
        }
        else if(arr[i] < ssmallest && arr[i]!=fsmallest){
            ssmallest= arr[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest=secondlargest(a,n);
    int Ssmallest=ssmallest(a,n);

return {slargest,Ssmallest};
}

main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> result=getSecondOrderElements(n,arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
}