   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;


main(){
 
 vector<int>arr = {1,10,20,1,10,5};
 set<int>st;
 for(auto it : arr) st.insert(it);
 for(auto it : st) cout<<it<<" ";

 return 0;
 }