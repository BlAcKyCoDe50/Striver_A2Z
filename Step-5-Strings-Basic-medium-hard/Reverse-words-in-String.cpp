/*

Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. 
The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated 
by a single space.

Note that s may contain leading or trailing spaces or 
multiple spaces between two words. The returned string 
should only have a single space separating the words. 
Do not include any extra spaces.

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **************using String Stream*****************
// string reverseWords(string s) 
// {
//         stringstream st(s);
//         string token="";
//         string result="";
       
//         while(st>>token)
//         {
//             result=token+" "+result;
//         }
//         int n = result.size();
//         return result.substr(0,n-1);
// }

string reverseWords(string s)
{
     reverse(s.begin(),s.end());
        int i=0,l=0,r=0;
        int n=s.size();
            while(i<n )
            {
                while(i<n && s[i]!=' ') s[r++]=s[i++];
                if(l<r)
                {
                    reverse(s.begin()+l,s.begin()+r);
                    s[r]=' ';
                    r++;
                    l=r;
                }
                i++;
            }
            s=s.substr(0,r-1); 
            return s;  
}
main(){

string s= "the sky is blue";
cout<<reverseWords(s);
return 0;
}