#include<iostream>
using namespace std;

void pattern_1(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*"<<" ";;
		}
        cout<<endl;
	}
}

void pattern_2(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*"<<" ";;
		}
        cout<<endl;
	}
}

void pattern_3(int n){
	int no=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			no++;
			cout<<no<<" ";
		}
		cout<<endl;
		
	}
}

void pattern_4(int n){
	for(int i=1;i>=n;i++){
		for(int j=0;j<n-i+1;j++){
			cout<<"* ";
		}
        cout<<endl;
	}
}

void pattern_5(int n){
	for(int i=1;i>=n;i++){
		for(int j=0;j<n-i+1;j++){
			cout<<j<<" ";
		}
        cout<<endl;
	}
}

void pattern_6(int n){
	for (int i = 0; i < i-n-1; i++)
	{
		for (int j = 0; j < i-n-1; i++)
		{
			/* code */
			cout<<" ";
		}
		for (int j = 0; i < 2*i+1; i++)
		{
			cout<<"*";
		}
		for(int j=0;j<i-n-1;i++){
			cout<<" ";
		}
		cout<<endl;
		
	}
	
}

void pattern_7(int n){
	for (int i = 0; i < n; i++) {
        
        // Spaces
        for (int j = 0; j < i*i; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j< 2*n-(2*i+1); j++) {
            cout << "*";
        }
		for (int j = 0; j < i*i; j++) {
            cout << " ";
        }

cout<<endl;
        
    }
	
}

void pattern_8(int n){
	pattern_6(n);
	pattern_7(n);
	
}

void pattern_9(int n){
	for (int i = 0; i < 2*(n-1); i++)
	{
		
	}
	
}

main(){


 int n;
 cin>>n;
 pattern_1(n);
 pattern_2(n);
	pattern_3(n);
	pattern_4(n);
	pattern_6(n);
	pattern_7(n);
 
	pattern_8(n);
return 0;
}