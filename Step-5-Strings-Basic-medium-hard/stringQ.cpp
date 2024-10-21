   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    // vector<pair<int, int>> searchWord(const string& str, const string& word) 
    // {
    // vector<pair<int, int>> positions;
    // int pos = str.find(word);
    // while (pos != string::npos) {
    //     positions.push_back(make_pair(pos, pos + word.length() - 1));
    //     pos = str.find(word, pos + 1);
    // }
    // return positions;
    // }

     vector<pair<int, int>> searchWord(string str, string word)
     {
        vector<pair<int, int>> res;
        
        int i=0,j=0;
        while (i!=str.size())
        {          
            if(str[i]==word[j])
            {  
                if(j==word.length()-1)
                {
                    // j=i; 
                    res.push_back(make_pair(i-j,i));
                    j=0;
                }
            // cout<<"calling"<<endl;
            i++;j++; 
            }
            else
            { 
                j=0;
                i++;
            }
        }
        return res;
    }

main(){

string str1 = "ABABDABACDABABCABAB";
string str2 = "ABABCABAB";

// cout<<str2.length();
vector<pair<int,int>> res = searchWord(str1,str2);
char c = 2;
cout<<c;
for(auto&it : res)
{
    cout<<it.first+1<<" "<<it.second+1<<endl;
}

 return 0;
 }