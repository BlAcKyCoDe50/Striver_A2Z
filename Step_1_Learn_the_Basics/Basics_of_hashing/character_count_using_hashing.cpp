#include<iostream>
using namespace std;
main(){

string s;
cin>>s;

int hash[256]={0};
for (int i = 0; i < s.size(); i++)
{
    hash[s[i]]++;
}

int queries;
cin>>queries;
while (queries!=0)
{
    char c;
    cin>>c;
    //fetch
    cout<<hash[c]<<endl;
    queries--;
}
return 0;
}