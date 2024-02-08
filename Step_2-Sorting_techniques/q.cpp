//wizen technology question:
//we have to print the array adjacent elements and from that adjacent 
// elemens array we have to print the adjacent elements of that array
// until the last element remain
#include<iostream>
#include<vector>
using namespace std;
main(){

int n;
cin>>n;
vector<int> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

//alternate numbers print

vector<int> alternate;
for (int i = 0; i < n; i=i+2)
{
  alternate.push_back(arr[i]);
}

//alternate array k alternate
vector<int>alternate_2;
int size=alternate.size();
// int size=alternate_2.size();
for(int i=0;i<size;i=i+2)
{
    // alternate_2.push_back(alternate[i]);
    while(alternate.size()>0 && size!=0){
        alternate_2.push_back(alternate[i]);
        i=i+2;
        size--;
    }
}
for(auto element: alternate_2)
{
    cout<<"last adjacent element is: "<<element;
    break;
}

}