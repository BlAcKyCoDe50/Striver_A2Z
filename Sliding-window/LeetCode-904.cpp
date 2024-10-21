   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

/*

You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array 
fruits where fruits[i] is the 
type of fruit the ith tree produces.

You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. 
The picked fruits must fit in one of your baskets.
Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
Given the integer array fruits, return the maximum number of fruits you can pick.

 

Example 1:

Input: fruits = [1,2,1]
Output: 3
Explanation: We can pick from all 3 trees.
Example 2:

Input: fruits = [0,1,2,2]
Output: 3
Explanation: We can pick from trees [1,2,2].
If we had started at the first tree, we would only pick from trees [0,1].
Example 3:

Input: fruits = [1,2,3,2,2]
Output: 4
Explanation: We can pick from trees [2,3,2,2].
If we had started at the first tree, we would only pick from trees [1,2].

*/
//Brute force approach

// int maxFruits(vector<int>&arr)
// {
//     int maxlen = 0;
        
//         for(int i=0;i<fruits.size();i++)
//         {
//             set<int>st;
//             for(int j= i;j<fruits.size();j++)
//             {
//                 st.insert(fruits[j]);
//                 if(st.size()<=2)
//                 {
//                     maxlen = max(maxlen , j-i+1);
//                 }
//                 else break;
//             }
//         }
//         return maxlen; 
// }

//for better solution we are using Sliding window technique
int maxFruits(vector<int>&fruits)
{
     
        int left = 0;
        int right = 0;
        int maxLen = 0;
        map<int,int>mp;
        while(right<fruits.size())
        {
            mp[fruits[right]]++;

            if(mp.size()>2)
            {
                while(mp.size()>2)
                {
                    mp[fruits[left]]--;
                    if(mp[fruits[left]]==0) mp.erase(fruits[left]);
                    left++;
                }
            }
            if(mp.size()<=2)
            {
                maxLen = max(maxLen , right-left+1);
            }
            right++;
        }
        return maxLen; 
    
}

main(){
    
    vector<int>arr = {3,3,3,1,2,1,1,2,3,3,4};
    cout<<maxFruits(arr);


 return 0;
 }