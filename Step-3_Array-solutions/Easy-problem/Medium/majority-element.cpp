// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#include<iostream>
using namespace std;
#include<vector>
#include "functions.cpp"
// bruteforce approach
// int majorityElement(vector<int> & arr){
//     int count=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//       for (int j = 1; j < arr.size(); j++)
//        {
//     if (arr[j]==arr[i])  count++;
//     if (count>arr.size()/2) return arr[i];   
//        }      
//     }
// }

//better approach

// int majorityElement(vector<int> & arr){
//     map<int,int> mpp;
//     for(int i=0;i<arr.size();i++){
//         mpp[arr[i]]++;
//     }
//     for(auto el:mpp){
//         if(el.second > (arr.size() / 2)){
//             return el.first;
//         }
//     }
//     return -1;
// }

//optimal approach
int majorityElement(vector<int> & arr){

int count=0;
int ansidx=0;

for (int i = 0; i < arr.size(); i++)
{
    if (arr[i]==arr[ansidx])
    {
        count++;
    }
    else count--;
    if(count==0){
        ansidx=i;
        count=1;
    }
}
return -1;
}


main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,arr.size());
cout<<"Majority element is: "<<majorityElement(arr);

return 0;
}