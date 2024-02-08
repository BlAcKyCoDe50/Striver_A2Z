#include<iostream>
using namespace std;

int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*(factorial(num-1));
}



main(){
    int r=factorial(4);
    cout<<r;

return 0;
}