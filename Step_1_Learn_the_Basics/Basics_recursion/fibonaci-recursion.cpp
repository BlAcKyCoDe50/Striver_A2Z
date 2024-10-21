#include<iostream>
using namespace std;

//check striver...or check your CPP notebook for explaination 
//and sudo code  :).....Keep learning

int fib(int n){
   if(n<=1) return n;
   int last= fib(n-1);
   int second_last=fib(n-2);
   return last+second_last; 
}

main(){

// int i,n;
cout<<fib(9);

return 0;
}