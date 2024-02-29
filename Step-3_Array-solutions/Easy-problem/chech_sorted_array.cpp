#include<iostream>
using namespace std;

bool IsSorted(int arr[],int n){
bool sorted=true;
for (int i = 1; i < n; i++)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>=arr[i-1]);
        else{
            return false;
        }
    }
    return true;
    
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
int result=IsSorted(arr,n);
if (result==1)
{
    cout<<"Sorted...";
}
else cout<<"Not Sorted...";
return 0;
}
