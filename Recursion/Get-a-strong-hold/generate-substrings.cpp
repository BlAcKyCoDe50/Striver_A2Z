   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    void generateStrings(string str , int start, int end)
    {
        if(start==str.length()) return;

        if(end==str.length()) 
        {
        generateStrings(str, start+1, start+1);    
        return;
        }
        
        cout<<str.substr(start,end-start+1)<<endl;
        
        generateStrings(str, start , end+1);
    }

main(){
 
string str = "gfg";
    generateStrings(str, 0 , 0);
 return 0;
 }