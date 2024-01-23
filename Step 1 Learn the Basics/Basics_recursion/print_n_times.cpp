#include <iostream>
#include <vector>
using namespace std;

vector<string> printNTimes(int n) {
	// Write your code here.
	if(n>0){
	cout<<"Coding Ninjas ";
	printNTimes(n-1);
	}
	
}

main(){
    printNTimes(5);
    return 0;
}