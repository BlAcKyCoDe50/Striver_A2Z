#include<iostream>
using namespace std;
    bool isPowerOfTwo(int n) { 
        if(n==0) return false;
        while(n%2==0) n=n/2;
        return n==1;       
}

main(){
int n;
cin>>n;
cout<<isPowerOfTwo(n);

return 0;
}