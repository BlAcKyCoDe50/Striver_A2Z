
/*

Given two strings s and goal, return true if and only if s can become goal after some number 
of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) 
    {
        for(int i=1;i<=s.length();i++)
        {
            string res=s.substr(i)+s.substr(0,i);
            if(res==goal) return true;
        }
        return false;
    }

main(){
string s="abcde";
string goal="cdeab";
cout<<rotateString(s,goal);

return 0;
}