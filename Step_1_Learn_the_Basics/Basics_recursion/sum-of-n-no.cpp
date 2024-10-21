#include<iostream>
using namespace std;

void n_sum(int x,int &sum){
    // int sum=0;
    if (x<=0) //false
    {
        cout<<sum;
        return;
    }
    sum=sum+x; //0+2=2,
    
    n_sum(x-1,sum);
    
}
main(){
int sum=0;
n_sum(3,sum);

return 0;
}