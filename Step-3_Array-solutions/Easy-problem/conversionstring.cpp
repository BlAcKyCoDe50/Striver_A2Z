#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
int n;
cin>>n;
string str="hello";
for (int i = 0; i < str.length(); i++)
{
    str[i]=toupper(str[i]);
}
cout<<str;


return 0;
}