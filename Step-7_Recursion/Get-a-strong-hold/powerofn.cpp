   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    int power(int i,int n , int upper,int ans)
    {
        if(i==upper)
            return ans;
        power(i+1,n,upper,ans*n);
      
    }

main(){
 
    int num  =2;
    int upper =4;
    cout<<power(1,num,upper,num);
    return 0;
 }