#include<bits/stdc++.h>
using namespace std;
main(){
string s;
cin>>s;

map<char,int> mpp;
for (int i = 0; i < s.length(); i++)
{
    mpp[s[i]]++;
}

// for(auto it:mpp){
//     cout<<it.first<<"->"<<it.second<<endl;
//     //first=key
//     //second=value
// }


int queries;
cin>>queries;

for (int i = 0; i < queries; i++)
{
    char word;
    cin>>word;
   cout<<mpp[word]<<endl;
}

return 0;
}