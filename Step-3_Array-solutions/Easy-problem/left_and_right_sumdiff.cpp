/*'
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference(vector<int>& arr) {
        int left=0;
        int right=arr.size();
        // cout<<"size: "<<right;
        //for left sum
        vector<int>rightsum;
        vector<int>leftsum;
        int sum=0;
        leftsum.push_back(0);
        for(int i=left;i<right-1;i++){
            sum=sum+arr[i];
            leftsum.push_back(sum);
        }
        
        sum=0;
        // vector<int>leftsum;
        //for right sum
         rightsum.push_back(0);
        for(int i=right-1;i>left;i--){
            sum=sum+arr[i];
            rightsum.push_back(sum);
        }
        reverse(rightsum.begin(),rightsum.end());
        // cout<<""
        // int i=leftsum[0];
        // int j=rightsum[0];
        int r=0;
        vector<int>ans;
        for (int i = 0; i < arr.size() ; i++)
        {
            r=abs(leftsum[i]-rightsum[i]);
            ans.push_back(r);
        }
        return ans;
    }

int main(){
    vector<int> arr={10,4,8,3};
    vector<int>ans=leftRightDifference(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}