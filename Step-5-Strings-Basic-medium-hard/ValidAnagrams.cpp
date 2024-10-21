#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
       sort(begin(s),end(s));
       sort(begin(t),end(t));
        return s==t;    
    }
};
main(){
Solution s;
int n;
string ss="anagram";
string tt="nagaram";
cout<<s.isAnagram;

return 0;
}