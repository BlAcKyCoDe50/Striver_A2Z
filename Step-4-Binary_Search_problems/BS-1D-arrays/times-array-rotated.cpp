#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr){
    // Write your code here.  
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        //search space is already sorted
        //then arr[low] will always be
        //the minimum in that search space:
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return index;
  
}

main(){

// cin>>n;
vector<int> arr={27 ,31, 43, 45, 46, 5 ,11 ,13 ,18 ,19 ,20 };
int n=arr.size();
int res=findKRotation(arr);
cout<<res;
return 0;
}