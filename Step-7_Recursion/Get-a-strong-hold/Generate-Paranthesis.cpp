/*
Given n pairs of parentheses, write a function to generate all combinations 
of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]

*/

   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

   class Solution {
public:
    vector<string>result;
    vector<string> generateParenthesis(int n) 
    {
       string curr = "";
        solve(curr,n);
        return result;
    }

    void solve(string &curr, int n)
    {
        if(curr.length()==n*2) //because possible valid combinatios are always of length n*2
        {
            if(isvalid(curr,n))
            {
                result.push_back(curr);
            }
            return ;
        }
        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();
    }

    bool isvalid(string&curr,int n)
    {
        int cnt=0;int open=0;
        for(int i=0;i<curr.length();i++)
        {
            if(open>n) return false;
            if(curr[i]=='(')
            { 
            cnt++;
            open++;
            }
            else cnt--;
            if(cnt<0) return false;
        }
        return cnt==0;
    }

};
main(){

    Solution s;
    
 return 0;
 }