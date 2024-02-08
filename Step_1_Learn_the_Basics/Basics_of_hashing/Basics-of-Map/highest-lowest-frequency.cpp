#include<bits/stdc++.h>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

map<int,int>mapp;
for (int i = 0; i < n; i++)
{
    mapp[arr[i]]++;
    int max_count=mapp[n];
int min_count=mapp[0];

}


for(auto it: mapp){
    cout<<it.first<<"->"<<it.second<<endl;
}

cout<<"Highest frequency:  "<<max_count<<endl;
cout<<"lowest_freqeuncy: "<<min_count;
return 0;
}