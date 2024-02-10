#include<iostream>
#include<vector>
#include "functions.cpp"
using namespace std;

int removeDuplicates(vector<int>& arr) {
        int i=0;
        for(int j=1;j<arr.size();j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i;
}

main(){
int n;
cin>>n;
vector <int> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

removeDuplicates(arr);
printArray(arr,n);

return 0;
}