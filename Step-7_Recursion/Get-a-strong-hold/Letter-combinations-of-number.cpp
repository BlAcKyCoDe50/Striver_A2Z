/*

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]

*/

   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
   vector<string>result;
    void solve(int index , string&digits , string&temp , unordered_map<char,string>mp)
    {
        if(index==digits.length())
        {
            result.push_back(temp);
            return;
        }

        char ch = digits[index];
        string str = mp[ch];

        for(int i=0;i<str.size();i++)
        {
            temp.push_back(str[i]);
            solve(index+1 , digits , temp , mp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) 
    {
        if(digits.length() == 0) return {};
        unordered_map<char,string>mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        string temp = "";
        solve(0 , digits ,temp , mp);
        return result;
    }

main(){
 
string digit = "23";
vector<string> res = letterCombinations(digit);
for(auto it : res) cout<<it<<" ";

 return 0;
 }

  