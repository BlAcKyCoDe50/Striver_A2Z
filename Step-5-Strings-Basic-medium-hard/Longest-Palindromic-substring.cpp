/*

Given a string s, return the longest 
palindromic
 
substring
 in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"

*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) 
    {
     string ans;
     int i=0,j=s.size()-1;
     while(i<s.size() && j>=0)
     {
        if(s[i]!=s[j]) j--;
        else if(s[j]==s[i])
        {
            ans+=s[i];
            i++;j--;
        }
        if(s[i]!=s[j] && j==i+1) i++;
     }
     return ans;
    }
};

main()
{
    Solution s;
    string str="cbbd";
    cout<<s.longestPalindrome(str);
}