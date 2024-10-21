#include<iostream>
using namespace std;
#include "functions.cpp"

void selectionSort(int arr[],int n){

    for (int i = 0; i <= n-2; i++)
    {
        cout<<"value of i: "<<arr[i]<<" ";
        int min=i;
        for(int j=i;j<=n;j++){
            if (arr[j]<arr[min])
            {
                min=j;
            }
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
            
        }
    }
    
}

void bubbleSort(int arr[],int n){
    cout<<"Sorting through bubble sort: ";
    int didswaps=0;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswaps=1;
            }
        if (didswaps==0)
        {
            break;
        }
            
        }

        
    }
    
}

void insertion_sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int temp=arr[i];
        int j = i-1;
        for (; j>=0; j--)
        {
            if (arr[j]<temp)
            {
                arr[j+1]=arr[j];  
            }
            else{
                break;;
            }
            
        }
        arr[j+1]=temp;
    }

}

main(){
int n;
cin>>n;
int arr[n];
array_insertion(arr,n);
// selectionSort(arr,n);
bubbleSort(arr,n);
array_print(arr,n);

return 0;
}