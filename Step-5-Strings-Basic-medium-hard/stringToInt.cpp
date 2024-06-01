#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) 
    {
        if(s.size()==0) return 0;
        int i=0;
        while(i<s.size() && s[i]==' ') i++;
        s=s.substr(i);
        int sign=+1;
        if(s[0]=='-') sign=-1;
        int max=INT_MAX,min=INT_MIN;
        if(s[0]=='+' || s[0]=='-') i=1;
        else i=0;
    long ans=0;
        
        while(i<s.length())
        {
            if(s[0]==' '|| !isdigit(s[i])) break;
            if(s[i]>='0' && s[i]<='9')
            // {
            char ch=s[i];
            int digit=s[i]-'0';
            ans=ans*10+digit;
            if(sign==-1 && ans*sign<min) return min;
            if(sign==1 && ans*sign>max) return max;
            // cout<<ans;
            i++;
        }
        return ans*sign;
    }
};

main(){

Solution s;
cout<<s.myAtoi("1337c0d3");

return 0;
}