
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int largestElement(vector<int>& arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
int n;
cin>>n;
int element;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

cout<<"Largest element: "<<largestElement(arr,n);

}
