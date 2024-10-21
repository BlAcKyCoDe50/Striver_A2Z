   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

 string fun(vector<char>&arr,int n)
 {
    int i = 0;string res;int cnt=0;
    while(cnt!=n+1)
    {
        if(i==25 && cnt!=n)
        {
            i=0;
            res+=arr[i];
        }
        cnt++;
        i++;
    }
    res+=arr[i];
    // if(i==n) res+=arr[i-1];
    return res;
    
 }

main(){
 int n=956;
 vector<char> arr;
 for(char ch='A';ch<='Z';ch++)
 {
    arr.push_back(ch);
 }
 cout<<fun(arr,n);

 return 0;
 }