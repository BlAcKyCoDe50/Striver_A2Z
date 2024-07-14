   
   /*
   
   Given a pair of strings of equal lengths, Geek wants to find the better string. 
   The better string is the string having more number of distinct
    subsequences.
If both the strings have equal count of distinct subsequence then return 
str1.

Example 1:

Input:
str1 = "gfg", str2 = "ggg"
Output: "gfg"
Explanation: "gfg" have 6 distinct subsequences whereas "ggg" have 3 
distinct subsequences. 
Example 2:

Input: str1 = "a", str2 = "b"
Output: "a"
Explanation: Both the strings have only 1 distinct subsequence. 
   
   */
   
   
   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

   int countSub(string& str)
    {
        map<char,int>mp;
        int n= str.length();
        
        int arr[n+1];
        arr[0] = 1;
        
        for(int i=1;i<=n;i++)
        {
            arr[i] = 2*arr[i-1];
            
            if(mp.find(str[i-1])!=mp.end())
            {
                arr[i] = arr[i]-arr[mp[str[i-1]]];
            }
            mp[str[i-1]] = i-1;
        }
        return arr[n];
    }
    
    string betterString(string str1, string str2) 
    {
        // code here
        int a = countSub(str1);
        int b = countSub(str2);
        
        if(a<b) return str2;
        
        return str1;
    }
main(){
 
 string str1 = "gfg", str2 = "ggg";

 cout<<betterString(str1,str2);

 return 0;
 }