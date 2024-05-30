/*

Given a string s, sort it in decreasing order based on the frequency of the characters. 
The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   typedef pair<char,int> P; 
   
    string frequencySort(string s) 
    {
        // map<char,int>mp;
        unordered_map<char,int>mp;
        for(char &i:s)
        {
            mp[s[i]]++;
        }
        auto lambda=[&](P&p1,P&p2)
        {
            return p1.second>p2.second;
        };
        vector<pair<char,int>>arr;
        string result="";
        for(int i=0;i<=122;i++)
        {
            if(arr[i].second>0)
            {
                char ch=arr[i].first;
                int freq=arr[i].second;
                string temp=string(freq,ch);
                result+=temp;
            }
        }
        return result;
    }
};

main(){

string ss="tree";
Solution s;
cout<<s.frequencySort(ss);

return 0;
}