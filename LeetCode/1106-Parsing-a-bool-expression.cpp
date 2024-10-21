/*

A boolean expression is an expression that evaluates to either true or false. It can be in one of the following shapes:

't' that evaluates to true.
'f' that evaluates to false.
'!(subExpr)' that evaluates to the logical NOT of the inner expression subExpr.
'&(subExpr1, subExpr2, ..., subExprn)' that evaluates to the logical AND of the inner expressions subExpr1, subExpr2, ..., subExprn where n >= 1.
'|(subExpr1, subExpr2, ..., subExprn)' that evaluates to the logical OR of the inner expressions subExpr1, subExpr2, ..., subExprn where n >= 1.
Given a string expression that represents a boolean expression, return the evaluation of that expression.

It is guaranteed that the given expression is valid and follows the given rules.

 

Example 1:

Input: expression = "&(|(f))"
Output: false
Explanation: 
First, evaluate |(f) --> f. The expression is now "&(f)".
Then, evaluate &(f) --> f. The expression is now "f".
Finally, return false.
Example 2:

Input: expression = "|(f,f,f,t)"
Output: true
Explanation: The evaluation of (false OR false OR false OR true) is true.
Example 3:

Input: expression = "!(&(f,t))"
Output: true
Explanation: 
First, evaluate &(f,t) --> (false AND true) --> false --> f. The expression is now "!(f)".
Then, evaluate !(f) --> NOT false --> true. We return true.

NOTE : Easy problem just do the dry run of the code and you will get the answer.

*/

   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
        char solveopr(vector<char>arr , char opr)
    {
        if(opr=='!')
        {
            return arr[0]=='t' ? 'f' : 't';
        }
        if(opr=='&')
        {
            for(auto it : arr)
            {
                if(it=='f') return 'f';
            }
            return 't';
        }
        if(opr=='|')
        {
            for(auto it : arr)
            {
                if(it=='t') return 't';
            }
            return 'f';
        }
        return 't';
    }

    bool parseBoolExpr(string s) 
    {
        int n = s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]==',') continue;
            if(s[i]==')')
            {
                vector<char>arr;
                while(st.top()!='(')
                {
                    arr.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char opr = st.top(); //for the operator
                st.pop();

                st.push(solveopr(arr, opr));
            }
            else st.push(s[i]);
        }
        return st.top() == 't' ? true : false;
    }


main(){
    string s = "|(f,f,f,t)";
    cout<<parseBoolExpr(s);

 return 0;
 }