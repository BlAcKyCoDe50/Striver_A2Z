/*

A string s is called happy if it satisfies the following conditions:

s only contains the letters 'a', 'b', and 'c'.
s does not contain any of "aaa", "bbb", or "ccc" as a substring.
s contains at most a occurrences of the letter 'a'.
s contains at most b occurrences of the letter 'b'.
s contains at most c occurrences of the letter 'c'.
Given three integers a, b, and c, return the longest possible happy string. If there are multiple longest happy strings, return any of them. If there is 
no such string, return the empty string "".

A substring is a contiguous sequence of characters within a string.

 

Example 1:

Input: a = 1, b = 1, c = 7
Output: "ccaccbcc"
Explanation: "ccbccacc" would also be a correct answer.
Example 2:

Input: a = 7, b = 1, c = 0
Output: "aabaa"
Explanation: It is the only correct answer in this case.
 

*/

   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
    
    typedef pair<int,char>Pr; 

    string longestDiverseString(int a, int b, int c) 
    {
        priority_queue<Pr , vector<Pr>>pq; //max-heap;
        string str = "";
        if(a>0)
        {
            pq.push({a,'a'});
        }
        if(b>0)
        {
            pq.push({b,'b'});
        }
        if(c>0)
        {
            pq.push({c,'c'});
        }

        while(!pq.empty())
        {
            int currCnt = pq.top().first;
            int currChar = pq.top().second;
            pq.pop();

            if(str.length()>=2 && str[str.length()-1]==currChar && str[str.length()-2]==currChar)
            {
                //we can't use this char because we can't use three consecutive char
                if(pq.empty()) break;
                // we need to  check for next char

                int nxtCnt = pq.top().first;
                int nxtChar = pq.top().second;
                pq.pop();

                str.push_back(nxtChar);
                nxtCnt--;
                if(nxtCnt>0) pq.push({nxtCnt , nxtChar}); 
            }
            else
            {
                currCnt--;
                str.push_back(currChar);
            }
                if(currCnt>0)
                {
                    pq.push({currCnt , currChar});
                }
            }
            return str;
        }



main(){
 
 int a = 1;
 int b = 1;
 int c = 7;

cout<<longestDiverseString(a,b,c);


 return 0;
 }