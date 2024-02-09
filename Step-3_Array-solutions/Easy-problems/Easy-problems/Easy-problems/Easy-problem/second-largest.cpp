
// void second_largest(vector<int> &arr,int n)
// {  
//     int first_largest=arr[0];
//     int second_largest=arr[1];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>first_largest)
//         {
//             first_largest=arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){    
//         if (arr[i]>second_largest && arr[i]!=first_largest)
//         {
//             second_largest=arr[i];
//         }
//     }
//     cout<<"first largest: "<<first_largest;
//     cout<<"Second largest: "<<second_largest;  
// }

// *********optimal approach*********************
#include<iostream>
#include<vector>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int flargest=a[0];
    int slargest=a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i]>flargest)
        {
            slargest=flargest;
            flargest=a[i];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a[i]<flargest && a[i]>slargest)
        {
            slargest=a[i];
        }    
    }

    if (flargest == slargest) {
        return vector<int>();
    }

    vector<int> arr1(2);
    arr1[0] = flargest;
    arr1[1] = slargest;
    return arr1;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> result = getSecondOrderElements(n, arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
