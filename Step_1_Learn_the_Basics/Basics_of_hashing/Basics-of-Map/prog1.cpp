#include<bits/stdc++.h>
// #include <map>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++ )
{
    cin>>arr[i];
}

//pre-compute
map<int ,int> mpp;
for (int i = 0; i < n; i++)
{
    mpp[arr[i]]++;
} 
//iterating in the map

// for(auto it:mpp){
//     cout<<it.first<<"->"<<it.second<<endl;
//     //first=key
//     //second=value
// }


int queries;
cin>>queries;

for (int i = 0; i < queries; i++)
{
    int num;
    cin>>num;
   
    cout<<mpp[num]<<endl;
}
return 0;
}
