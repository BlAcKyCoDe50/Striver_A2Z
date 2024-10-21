#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
        string res;
        int opened=0;
        for(auto c:s)
        {
            if(c=='(')
            {
                if(opened>0) res+=c;
            
            opened++;
            }
            else if(c==')')
           {
            opened--;
            if(opened>0) res+=c;
           }
        }
        return res;
    }

main(){
string s="(()())(())(()(()))";
cout<<removeOuterParentheses(s);
return 0;
}