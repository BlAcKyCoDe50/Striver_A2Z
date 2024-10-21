/*
Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number 
of nested parentheses.

Example 1:

Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.

Example 2:

Input: s = "(1)+((2))+(((3)))"

Output: 3

Explanation:

Digit 3 is inside of 3 nested parentheses in the string.

Example 3:

Input: s = "()(())((()()))"

Output: 3

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) 
    {
        // map<char,int>mp;
        vector<int>arr;
        int cnt=0;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') cnt++;  
            else if(s[i]==')') {
            cnt--;
            }
            maxi=max(cnt,maxi);
        }
        
    return maxi ;
    }
};

main(){

string ss="(1+(2*3)+((8)/4))+1";
Solution s;
cout<<s.maxDepth(ss);
return 0;
}