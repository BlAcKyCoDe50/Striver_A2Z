#include<iostream>
#include "functions.cpp"
#include<vector>
using namespace std;
#include<vector>

void rightRotate(vector<int> &arr,int k){
    vector<int> temp(k);
    int n=arr.size();
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements of arr to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the elements from temp back to arr
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    // printArray(arr,n);
}




main(){
int n;
cin>>n;

vector<int> arr(n);
array_insertion(arr,n);
int k;
cout<<"Enter the number of right rotations: ";
cin>>k;
rightRotate(arr,k);
printArray(arr,n);
return 0;
}