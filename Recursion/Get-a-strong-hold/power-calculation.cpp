   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    int pow(int x,int n)
    {
        if(n==0) return 1;
        int res  = pow(x,n-1);
        int fres = res*x;
        return fres;
    }

main(){

    int x=2;
    int n = 4;
    cout<<pow(x,n);

 return 0;
 }