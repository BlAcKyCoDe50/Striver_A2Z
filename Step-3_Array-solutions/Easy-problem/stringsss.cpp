
#include<bits/stdc++.h>
using namespace std;

string capitalizeTitle(string title) {
        stringstream iss(title);
        string word;
        string result;

        while(iss>>word){
            if(word.length()==1 || word.length()==2)
            {
                transform(word.begin(),word.end(),word.begin(),::tolower);
            }
            else{
                 word[0] = std::toupper(word[0]);
                transform(word.begin()+1,word.end(),word.begin()+1,::tolower);
            }
        
        if (!result.empty()) {
                result += " ";
            }
            result += word;
        
        }
    return result;

    }

main(){

str s="capiTalIze tHe titLe";

return 0;
}