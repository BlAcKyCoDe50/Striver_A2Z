#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool detectCapitalUse(string word) {
         bool flag=true;
        
        if(word.length()==1){
            bool check=islower(word[0]);
            if(check) return flag;
            bool check2=isupper(word[0]);
            return true;
        }
        
        for(int i=0;i<word.length();i++)
        {
            cout<<"1"<<endl;
            if(isupper(word[i])){flag=true; continue;}
            else{
                flag=false;
                break;
            }
            
        }
        if(flag) return flag;
        cout<<flag<<endl;
        for(int i=0;i<word.length();i++)
        {
            cout<<"2"<<endl;
            if(islower(word[i])) {flag=true;continue; }
            else
            {
                flag=false;
                break;
            }
        }
        cout<<flag<<endl;
        if(word[0] && flag==true)return flag;
        bool check=isupper(word[0]);
        if(flag==false && check==true)
        {
            cout<<"3"<<endl;
            for(int i=1;i<word.length();i++)
            {
                if(islower(word[i])){flag=true; continue;}
                else{
                    flag=false;
                    break;
                }
            }
        }
        return flag;
      }

main(){

string s="Leetcode";
bool res=detectCapitalUse(s);
if(res==0) cout<<"false";
else cout<<"true";

return 0;
}