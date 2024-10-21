   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
main(){
 vector<vector<int>> arr = {{1,2,2,2,3,10,4,5,2}};
 for (int i = 0; i < arr.size(); i++)
 {
    for(int j = 0;j<arr.size();j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 


 return 0;
 }