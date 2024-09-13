   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
   //there are 3 trainees, we have to check the oxygen level of 
   //each trainee after every round and check their avg 

main(){
   int weight;
   cin>>weight;
   if(weight<0) cout<<"Invalid input"<<endl;
   if(weight==0) cout<<"Estimated time : 0 minuites"<<endl;
   if(weight>7000) cout<<"Overloaded"<<endl;
   if(weight<=2000)
   {
      cout<<"Estimated time : 25 minuites"<<endl;
   }
   if(weight>=2001 && weight<=400)
   {
      cout<<"Estimated time : 35 minuites"<<endl;
   }
   if(weight>=400)
   {
      cout<<"Estimated time : 45 minuites"<<endl;
   }

 return 0;
 }