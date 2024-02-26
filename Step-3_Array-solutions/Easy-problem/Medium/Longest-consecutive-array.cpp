#include<bits/stdc++.h>
#include "functions.cpp"
using namespace std;

// ************better********************
int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0) return 0;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int last_smaller=0;
        int longest=1,count=0;
        for(int i=0;i<n;i++){
            if(arr[i]-1==last_smaller){
                count+=1;
                last_smaller=arr[i];
            }
            else if(last_smaller!=arr[i]){
                count=1;
                last_smaller=arr[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }

int longestConsecutive(vector<int>& arr){
    
}

main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,n);
cout<<longestConsecutive(arr);

return 0;
}