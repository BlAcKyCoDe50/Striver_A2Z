#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        cout<<"len"<<s.length()<<endl;
        for(int i=0;i<s.length();i=i+k)
        {
            string c=s.substr(i,k);
            cout<<"pushing: "<<c<<endl;
            if(c.length()<k){
                c.append(k-c.length(),fill);
            }
            ans.push_back(c);
        }
        return ans;
    }

main(){

string s="abcdefghij";

vector<string>res=divideString(s,3,'x');
// cout<<res.size();
for (int i = 0; i < res.size(); i++)
{
    cout<<res[i];
}


return 0;
}