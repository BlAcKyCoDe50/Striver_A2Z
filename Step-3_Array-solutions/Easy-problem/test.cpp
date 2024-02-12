#include<iostream>
#include"functions.cpp"
using namespace std;

 void sort012(int a[], int n)
    {
        // code here 
    int low=0,mid=0;
        int high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
        }
}

main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
        cin>>arr[i];
}
sort012(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}