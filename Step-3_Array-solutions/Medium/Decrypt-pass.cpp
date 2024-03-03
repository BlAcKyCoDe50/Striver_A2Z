

//We have given the string and we have to decrypt it to the readable format
/*
method for the decryption is the string contains the alphabet characters along with numerics values
and we have to return the string with the elements of that digits along with normal string
*******TESTCASES**************

i/p 1: n01n..........o/p: noon;
i/p 2: gi00l1ng..........o/p: giggling
i/p 3: bu00le...........o/p: bubble

*/

#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

void decryption(string s){
    
for (int i = 0; i < s.size(); i++)
{
    if(isdigit(s[i])){
       int digit=s[i]-'0';
       cout<<s[digit];
    }
    else cout<<s[i];
}
}



main(){

string s;
cin>>s;
decryption(s);

return 0;
}