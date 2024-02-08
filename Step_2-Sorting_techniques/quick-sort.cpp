#include<iostream>
using namespace std;


int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i]<=pivot)
        {
            cnt++;
        }
        
    }
    //placing pivot at it's right positon
    pivot=s+cnt;
    swap(arr[pivot],arr[s]);

    //now left waala or right waala smhaanlna he 
    int i=s;int j=e;
    while (i<pivot && j>pivot)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[i]>=pivot)
        {
            j++;
        }
        if (arr[i]>pivot && arr[j]<pivot)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot;
    
}



void quickSort(int arr[], int s, int e) {
    if (s >= e) return;
    
    int pivot = partition(arr, s, e);
    quickSort(arr, s, pivot - 1); // Sort left partition
    quickSort(arr, pivot + 1, e); // Sort right partition


}


main(){
int n=5;
// cin>>n;
int arr[5]={5,4,3,2,1};

// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }

quickSort(arr,0,n-1);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}