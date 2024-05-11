// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
// int n;
// cin>>n;
vector<int> arr={1,2,3,4,5}; //1
vector<int> arr1={6,1,2,9,0};
vector<int>ans;
// sort(arr.begin(),arr.end());
// sort(arr1.begin(),arr1.end());
// for (int i = 0; i < arr.size(); i++)
// {
//     bool flag=true;
//     for (int j = 0; j < arr1.size(); j++)
//     {
//         if(arr[i]==arr1[j]) { flag=true; break;}
//     }
//     if(flag==false) ans.push_back(arr[i]);
// }
int i=0;int j=0;
while(i<arr.size() && j<arr.size())
{
    if(arr[i]==arr[j])
    {
        i++;j=0;
        // cout<<"current i: "<<arr[i]<<endl;
        
    }
     if(j==arr.size()-1) {cout<<"in if"<<endl;ans.push_back(arr[i]);}
    else j++;
}
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}
return 0;
}
