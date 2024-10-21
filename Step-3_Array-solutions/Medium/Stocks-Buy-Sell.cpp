#include "functions.cpp"
#include <bits/stdc++.h>
using namespace std;

int minSoFar(vector<int>& arr){
    int Profit,MaxProfit=0;
    int miniSoFar=arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        miniSoFar=min(arr[i],miniSoFar);
        Profit=arr[i]-miniSoFar;
        MaxProfit=max(Profit,MaxProfit);
    }
    return MaxProfit;
    
}

main(){



}