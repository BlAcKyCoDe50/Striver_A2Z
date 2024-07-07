   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    int maxel(vector<int>&arr,int i)
    {
        if(i==arr.size()-1) return arr[i];

        int misa = maxel(arr,i+1);
        if(misa>arr[i]) return misa;
        else return arr[i];
    }

main(){
 vector<int> arr={1,2,3,4,5};
 cout<<maxel(arr,0);

 return 0;
 } 