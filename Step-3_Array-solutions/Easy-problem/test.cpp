#include<bits/stdc++.h>
// #include<functional>
#include "functions.cpp"
using namespace std;


int fact(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }   
}

int main() {
    // vector<int> nums = {1, 4, 5, 2, 3, 4, 2, 3, 4, 2};
    // int target = 2;
    // unordered_map<int,int> mpp;
    // for(auto it: nums){
    //     mpp[it]++;  
    // }
    // cout<< mpp[target];

    int n=4;
    int r=2;
    int nfact=fact(n);
    int rfact=fact(r);

    int fin=nfact/(rfact*(fact(n-r)));
    cout<<fin;

}

