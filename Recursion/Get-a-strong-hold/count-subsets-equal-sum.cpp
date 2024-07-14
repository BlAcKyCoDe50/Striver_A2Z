   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    int countSubsequences(int i,int s, int sum, int arr[],int n)
    {
        //when we've considered all the elements
        if(i==n)    return (s==sum) ? 1:0;

// Recursive case: Two choices - take or not take the current element
    // Take the current element
        int take = countSubsequences(i+1, s+arr[i], sum ,arr,n);
    // Do not take the current element
        int notTake = countSubsequences(i+1,s,sum,arr,n);

    // Return the total count from both branches
        return take+notTake;
    }

   int countS(int arr[],int n, int sum)
   {
    return countSubsequences(0,0,sum,arr,n);
   }
main(){
 int n = 6;
 int arr[] = {2, 5, 1, 4, 3};
 
 int sum = 10;

 cout<<countS(arr,n,sum);

 return 0;
 }