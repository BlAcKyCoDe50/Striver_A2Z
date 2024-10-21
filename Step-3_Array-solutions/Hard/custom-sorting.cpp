#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void customSortString(string order, string s) {
    vector<char> orderedChars;
        for (char c : order) {
        for (char ch : s) {
            if (c == ch) {
                orderedChars.push_back(c);
            }
        }
    }

    for (char ch : s) {
        bool found = false;
        for (char c : order) {
            if (c == ch) {
                found = true;
                break;
            }
        }
        if (!found) {
            orderedChars.push_back(ch);
        }
    }
   for(auto ch:orderedChars){
        cout<<ch;
   }
}


    
main(){
// int n;
// cin>>n;
string order=  "bcafg";
string s= "abcd";
customSortString(order,s);

return 0;
}