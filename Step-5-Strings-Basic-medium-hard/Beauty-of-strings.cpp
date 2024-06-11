/*

The beauty of a string is the difference in frequencies between the most frequent and 
least frequent characters.

For example, the beauty of "abaacc" is 3 - 1 = 2.
Given a string s, return the sum of beauty of all of its substrings.

 

Example 1:

Input: s = "aabcb"
Output: 5
Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], 
each with beauty equal to 1.
Example 2:

Input: s = "aabcbaa"
Output: 17

*/


// **************brute force*****************
#include <bits/stdc++.h>
using namespace std;

/*
In simple language we have used a vector that stores the count of each substring.
Then we have a function that calulate the beauty of the current substring and add that result into
our res.
*/

// int beauty(vector<int>&cnt)
//     {
//         int mostfr=-1;int leastfr=INT_MAX;
//         for(int i=0;i<cnt.size();i++)
//         {
//             mostfr=max(mostfr,cnt[i]);
//             if(cnt[i]>=1)
//             {
//                 leastfr=min(leastfr,cnt[i]);
//             }
//         }
//         return mostfr-leastfr;
//     }
    
//     int beautySum(string s) 
//     {
//         int res=0;
//         for(int i=0;i<s.size();i++)
//         {
//             vector<int>cnt(26,0);
//             for(int j=i;j<s.size();j++)
//             {
//                 cnt[s[j]-'a']++;
//                 res=res+beauty(cnt);
//             }
//         }
//         return res;
//     }

//for optimizing this..we can use map instead of vector

int beautySum(string s)
{
    int res=0;
    for (int i = 0; i < s.size(); i++)
    {
        unordered_map<char,int>mp;
        for(int j=i;j<s.size();j++)
        {
            
            mp[s[j]]++;
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for(auto it : mp)
            {
                maxi=max(maxi,it.second);
                mini=min(mini,it.second);
            }
            int diff=maxi-mini;
            res+=diff;
        }
    }
    return res;
}

main()
{
    string str="aabcb";
    cout<<beautySum(str);
}