/*

we have to print the subsets where the sum is equal to the given sum

*/

   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    // void printS(int i,vector<int> &ds,int s,int sum,int arr[],int n)
    // {
        
    //     if(i==n)
    //     {
    //         if(s==sum)
    //         {
    //             for(auto it:ds) cout<<it<<" ";
    //             cout<<endl;
    //         }
    //         return;
    //     }

    //     ds.push_back(arr[i]); //take
    //     s+=arr[i];
    //     printS(i+1,ds,s,sum,arr,n);

    //     s-=arr[i];
    //     ds.pop_back(); //not take

    //     printS(i+1,ds,s,sum,arr,n);

    // }

    bool printS(int i,vector<int> &ds,int s,int sum,int arr[],int n)
    {
        
        if(i==n)
        {
            if(s==sum)
            {
                return true;
            }
            return false;
        }

        ds.push_back(arr[i]); //take
        s+=arr[i];
        if(printS(i+1,ds,s,sum,arr,n)) return true; 

        s-=arr[i];
        ds.pop_back(); //not take

        if(printS(i+1,ds,s,sum,arr,n)) return true;
        return false;
    }

main(){
 int n=3;
 int arr[] = {1,2,1};
 int sum =2;
 vector<int>ds;
 cout<<printS(0,ds,0,sum,arr,n);

 return 0;
 }