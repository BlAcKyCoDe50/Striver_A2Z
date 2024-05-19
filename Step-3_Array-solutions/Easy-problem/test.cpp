#include<bits/stdc++.h>
using namespace std;

int main(){

int n;int m;int k;
cin>>n;
cin>>m;
cin>>k;
int ans=(int) (pow(n,m));
while(ans>=10){
int ans=ans/10;
}
cout << ans;
return 0;
}