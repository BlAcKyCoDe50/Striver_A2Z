#include<iostream>
using namespace std;
#include<vector>
#include "functions.cpp"

void moveZeroes(vector<int>& nums) {
            int j=-1;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i]==0)
                {
                    j=i;
                    break;
                }
            }
            for (int i = j+1; i < nums.size(); i++)
            {
                if (nums[i]!=0)
                {
                  swap(nums[i],nums[j]);  
                  j++;
                }
            }
            
            
}


main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,n);
moveZeroes(arr);
printArray(arr,n);
return 0;
}