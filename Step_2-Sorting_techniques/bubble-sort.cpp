#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    // Base Case: range == 1.
    if (n == 1) return;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n-i;j++){    //n-i cuzz after every iteration the loop run's till n-1,n02,n-3,n-4....
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
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

bubble_sort(arr,n);

return 0;
}