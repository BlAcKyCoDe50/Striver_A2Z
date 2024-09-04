   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
main(){
 
 string s= "Move#Hash#to#Front";
 for(int i=0;i<s.size();i++)
 {
    if(s[i]=='#')
    {
        s[i] = '';
    }
 }
 cout<<s;
 return 0;
 }