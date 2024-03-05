#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }   
}
main(){
 
    int n=4;
    int r=2;
    int nfact=fact(n);
    int rfact=fact(r);
    //nCr=n! / r!*(n-r)!
    int fin=nfact/(rfact*(fact(n-r)));
    cout<<fin;
return 0;
}
