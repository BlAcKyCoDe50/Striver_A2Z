/*

Problem statement
You are given an array 'arr' sorted in non-decreasing order and a number 'x'.
You must return the index of lower bound of 'x'.

Note:
For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'

If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.

Consider 0-based indexing.
Example:
Input: ‘arr’ = [1, 2, 2, 3] and 'x' = 0
Output: 0
Explanation: Index '0' is the smallest index such that 'arr[0]' is not less than 'x'.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6
1 2 2 3 3 5
0
Sample Output 1:
0
Explanation Of Sample Input 1 :
Index '0' is the smallest index such that 'arr[0]' is not less than 'x'.
Sample Input 2:
6
1 2 2 3 3 5
2
Sample Output 2:
1
Sample Input 3:
6
1 2 2 3 3 5
7
Sample Output 3:
6

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int lowerBound(vector<int> arr, int n, int x) {              
// int ans = n ; // hypothetically the size will be the  answer
//    int low=0;
//    int high=arr.size()-1;       
// 	    while (low <= high) {
//         int  mid = (low+high) / 2;
//         if (arr[mid] >= x) {
//           high = mid - 1;
//           ans = mid;
//         }
//         else low = mid + 1;
//         }
// 		return ans;
// }

//by STL
int lowerBound(vector<int> arr, int n, int x) {  

    auto lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    return lb;
}


main(){

vector<int>arr={1, 2 ,2 ,3 ,3 ,5};
int x=2;
int n=arr.size();
int res=lowerBound(arr,n,x);
cout<<res;
return 0;
}