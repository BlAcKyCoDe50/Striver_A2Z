   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

int minii( vector<int>&arr){
    int mini =arr[0];
    for(int i=1;i<arr.size(); i++)
        if(arr[i]<mini) mini = arr[i];
    return mini;
}

int fun( vector<int> &arr, int n )
{
 int cnt=0;
while(arr.size()!=0)
{
    int mini =minii(arr);
if(arr[0] == mini)
{
    cnt++;
    arr. erase( arr. begin());
    // i++;
}
else{
    // cout<<"other"<<endl;
    cnt++;
    int first = arr[0];   
    arr.erase(arr.begin());
    arr.push_back(first);
}
}
return cnt;
}
main(){
int n = 3;
vector<int> arr = {1,2,4,3};
// cout<<minii(arr)<<endl;
cout<<fun(arr,n);

 return 0;
 }