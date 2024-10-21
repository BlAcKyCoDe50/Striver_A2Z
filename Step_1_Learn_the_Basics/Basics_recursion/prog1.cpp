#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x) {
    // Write Your Code Here
  vector<int>ar;
    int count=0;
    if(count==x){
        
    }
    else{
       while (count<x)
       {
        ar.push_back(count);
        count++;
        cout<<count<<" ";
       }
       
    }
    return ar;
}

main(){
   
    printNos(5);
    return 0;
}