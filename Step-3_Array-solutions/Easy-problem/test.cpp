#include<bits/stdc++.h>
// #include<functional>
#include "functions.cpp"
using namespace std;
main(){
int n;
cin>>n;
vector<int> arr(n);
array_insertion(arr,n);
set<int> st;
cout<<"Ascending Order: ";
for(auto it: arr){
    st.insert(it);
}

for(auto it: st) cout<<it<<" ";
sort(arr.begin(),arr.end(),greater<int>());
cout<<"Descending Order: ";
printArray(arr,n);

return 0;
}