/*
You is given an array ‘Arr’ of size ‘N’. You have to help him find the longest subarray of ‘Arr’, whose sum is 0. You must return the length of the longest subarray whose sum is 0.

For Example:
For N = 5, and Arr = {1, -1, 0, 0, 1}, 
We have the following subarrays with zero sums: 
{{1, -1}, {1, -1, 0}, {1, -1, 0, 0}, {-1, 0, 0, 1}, {0}, {0, 0}, {0}}
Among these subarrays, {1, -1, 0, 0} and {-1, 0, 0, 1} are the longest subarrays with their sum equal to zero. Hence the answer is 4.

Sample Input 1:
4
1 0 -1 1
Sample Output 1:
3
Explanation of Sample Input 1:
The subarrays with sums equal to zero are: {{1, 0, -1}, {0}, {0, -1, 1}, {-1, 1}}.
Among these, {1, 0, -1} and {0, -1, 1} are the longest with length equal to 3.
Hence the answer is 3.
Sample Input 2:
2
1 1
Sample Output 2:
0

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	// sort(arr.begin(),arr.end());
	int sum=0;
	int ans=0;
	// mp[0]=-1; /
	unordered_map<int,int> mpp;
	for(int i=0;i<arr.size();i++){
		sum+=arr[i];
		if(mpp.find(sum)!=mpp.end()){
			ans=max(ans,mpp[sum]);
		}
		else{
			mpp[sum]=i;
		}
	}
	
	return ans;
}

main(){
int n;
cin>>n;
vector<int> arr(n);
arr={1,-1,0,0,01};
cout<<getLongestZeroSumSubarrayLength(arr);

return 0;
}