   #include<bits/stdc++.h>
   using namespace std;

    void generatesubstring(string str, string curr ,vector<string>&ans,int i=0)
    {
         if(i==str.size())
         {
            ans.push_back(curr);
            return;
         } 

        // cout<<"hello from function";
        generatesubstring(str,curr+str[i],ans,i+1);
        generatesubstring(str,curr,ans,i+1);
    }

main(){
 
 string str = "abc";
 vector<string>ans;
 string curr = "";
 generatesubstring(str ,curr,ans);
 for(auto it : ans) cout<<it<<" ";

 return 0;
 }