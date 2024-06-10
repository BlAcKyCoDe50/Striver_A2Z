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

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   
   
//    ******************Brute force********************
   int maxi=0;int start=0;int end=0;
    bool isPalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            else{
                i++;j--;
            }
        }
        return true;
    }
    string longestPalindrome(string s) 
    {
        
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(isPalindrome(s,i,j))
                {
                    int curlength=(j-i)+1;
                    //calculating length
                    if(curlength>maxi)
                    {               
                    maxi=(j-i)+1;
                    start=i;
                    end=j;
                    }
                }
            }
        }
        return s.substr(start,maxi);
    }
};

main(){

string str="babad";
Solution s;
cout<<s.longestPalindrome(str);

return 0;
}