#include<bits/stdc++.h>
#include<vector>
#include "functions.cpp"
using namespace std;

int removeDuplicates(vector<int>& arr) {
        int cnt=0;
        int n=arr.size();
        set<int>st;
        for(int i=0;i<arr.size();i++){
                st.insert(arr[i]);
        }
        
        int i=0;
        for(auto it=st.begin();it!=st.end();it++){
            arr[i]=*it;
            cnt++;
            i++;
        }
        return cnt;
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