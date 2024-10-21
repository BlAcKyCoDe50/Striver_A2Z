#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++ )
{
    cin>>arr[i];
}

//precompute

int hash[13]={0};
for (int i = 0; i < n; i++)
{
    hash[arr[i]]=+1;   //this means arr[i] is the index for the hash array 
}

int queries;
cin>>queries;

for (int i = 0; i < queries; i++)
{
    int num;
    cin>>num;
    cout<<hash[num]<<endl;
}
return 0;
}