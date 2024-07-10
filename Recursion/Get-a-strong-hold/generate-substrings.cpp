   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    void generateStrings(string str , int start, int end)
    {
        if(end==str.length()) return;

        if(start<=end) cout<<str.substr(start , end-start+1)<<endl; 

        generateStrings(str, start, end+1);

        if(start==0) generateStrings(str, start+1 , start+1);
    }

main(){
 
string str = "abc";
    generateStrings(str, 0 , 0);
 return 0;
 }