  /*
  
  You are given a string s and an integer k. Encrypt the string using the following algorithm:

For each character c in s, replace c with the kth character after c in the string 
(in a cyclic manner).
Return the encrypted string.

 

Example 1:

Input: s = "dart", k = 3

Output: "tdar"

Explanation:

For i = 0, the 3rd character after 'd' is 't'.
For i = 1, the 3rd character after 'a' is 'd'.
For i = 2, the 3rd character after 'r' is 'a'.
For i = 3, the 3rd character after 't' is 'r'.
  
  */ 
   
   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

     string getEncryptedString(string s, int k) 
    {
        string res;
        for(int i=0;i<s.size();i++)
        {
            int a = (i+k)%s.size();
            cout<<res<<endl;
            res.push_back(s[a]);
        }
        return res;   
    }

main(){
 

 return 0;
 }