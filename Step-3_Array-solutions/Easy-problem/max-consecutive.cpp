#include<iostream>
using namespace std;
#include "functions.cpp"

int max(int num1,int num2){
        if(num1>num2){
            return num1;
        }else{
            return num2;
        }
}
    
    
int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int maxi=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
            maxi=max(count,maxi);
            }
        else{
            count=0;
            }
        }
    return maxi;
    }

main(){
int n;
cin>>n;
vector<int>arr(n);
array_insertion(arr,n);
cout<<findMaxConsecutiveOnes(arr);
return 0;
}