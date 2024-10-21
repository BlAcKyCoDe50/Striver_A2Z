#include<iostream>
#include<algorithm>
#include "functions.cpp"
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
   int n = nums.size();
        k %= n; // To handle cases where k > n

        // Reverse the entire vector
        reverse(nums.begin(), nums.end());

        // Reverse the first part up to k
        reverse(nums.begin(),nums.begin()+ k);

        // Reverse the remaining part
        reverse(nums.begin() + k, nums.end());
}


main(){
int n;
cin>>n;
vector<int> arr(n);

array_insertion(arr,n);
cout<<"Enter the rortaions count: ";
int k;
cin>>k;
rotate(arr,k);
printArray(arr,n);
return 0;
}