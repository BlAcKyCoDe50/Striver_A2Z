   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    // int firstocc(vector<int>&arr,int el,int i)
    // {
    //     if(arr[i]==el) return i;
    //     int res = firstocc(arr,el,i+1);
    // }

    int lastocc(vector<int>&arr,int el,int i)
    {
        if(i==arr.size()) return -1;
        int res = lastocc(arr,el,i+1);
        if(res!=-1) return res;   
        if(arr[i]==el) return i;
         return -1;
    }

main(){ 

 vector<int> arr={1,2,3,8,3};
 int el = 3;int i=0;
 int res = lastocc(arr,el,i);
  cout<<res;
 return 0;
 }