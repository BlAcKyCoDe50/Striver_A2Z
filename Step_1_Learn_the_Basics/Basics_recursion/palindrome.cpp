#include<iostream>
// #include<string.h>
using namespace std;

bool palindrome(string arr,int n,int i){
    if(i>=n/2) return true;
    if(arr[i]!=arr[n-i-1]) return false;
    return palindrome(arr,n,i+1);
}


main(){
string arr;
cin>>arr;
int length=arr.length();
cout<<length;
cout<<palindrome(arr,length,0);


return 0;
}