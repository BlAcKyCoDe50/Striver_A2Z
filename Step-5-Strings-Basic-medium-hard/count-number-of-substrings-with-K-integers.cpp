/*

Given a string of lowercase alphabets, count all possible substrings 
(not necessarily distinct) that have exactly k distinct characters. 

Example 1:

Input:
S = "aba", K = 2
Output:
3
Explanation:
The substrings are: "ab", "ba" and "aba".
Example 2:

Input: 
S = "abaaca", K = 1
Output:
7
Explanation:
The substrings are: "a", "b", "a", "aa", "a", "c", "a". 

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    long long substrCount(string s, int k) {
    int n = s.size();
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        set<char> st;
        for (int j = i; j < n; j++) {
            st.insert(s[j]);
            if (st.size() == k) {
                cnt++;
            } else if (st.size() > k) {
                break;
            }
        }
    }

    return cnt;
}
    
    // int res=s.length();
    // return res+1;
    // }
};

main()
{
    Solution s;
    string str="abaaca";
    cout<<s.substrCount(str,1);
}