   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    int convert(string &s, int i , int sign , long long result)
    {
       if(i==s.length()|| !isdigit(s[i])) return result*sign;

       result = result *10+ (s[i]-'0');
       if(result * sign>=INT_MAX) return INT_MAX;
       if(result*sign<=INT_MIN) return INT_MIN;

       return convert(s,i+1,sign,result);

    }
    
    int myAtoi(string s) 
    {
        int i=0;
        while(i<s.length() && s[i]==' ') i++;

        int sign=1;
        if(i<s.length() && (s[i]=='-' || s[i]=='+'))
        {
            sign = (s[i]=='-') ? -1:1;
            i++;
        }
        return convert(s,i,sign,0);
    }
main(){
 int n;
 cin>>n;

 return 0;
 }