#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int i,int x) {
    // Write Your Code Here
 if (i>x)
 {
    // return ;   
 }
 else{
    cout<<i<<" ";
    printNos(i+1,x);
 }
  
}
main(){
    printNos(1,5);
 }
