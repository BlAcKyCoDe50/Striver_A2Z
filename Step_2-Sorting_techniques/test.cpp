#include<iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
main(){
string s="hello";
int cnt=0;
int i=0;
int j=4;

do
{
    for (int i = 0; i <=4; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    for (int i = 4; i>=0; i--)
    {
        cout<<s[i];
    }
    cout<<endl;
    cnt++;
    
} while (cnt<=10);
}
