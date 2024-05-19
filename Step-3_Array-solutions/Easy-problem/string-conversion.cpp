#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	string res=str;
	str[0]=toupper(str[0]);
	
	for (int i = 0; i < str.size(); i++)
	{
		if(str[i]==' ') str[i+1]=toupper(str[i+1]);
	}
	
	// str=res;
	return str;
	
}

main(){

string s={"hello i am vishuu"};
string res=convertString(s);
cout<<res;


return 0;
}