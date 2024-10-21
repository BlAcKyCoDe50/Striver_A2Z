#include<iostream>
using namespace std;

int missing(int num,int n,int arr[]){
   
   int totalSum=(n*(n+1))/2;
   int sum=0;
    for (int i = 0 ; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return (totalSum-sum);
    
}



main(){
int n;
cin>>n;
int arr[5]={1,3,4,5};

cout<<"Missing number is: "<<missing;

return 0;
}