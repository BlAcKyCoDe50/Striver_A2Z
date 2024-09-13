#include<bits/stdc++.h>
using namespace std;
char *moveHash(char str[],int n)
{
    char str1[100],str2[100];
    int i,j=0,k=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='#')
        str1[j++]=str[i];
        else
        str2[k++]=str[i];
    }
    strcat(str1,str2);
    cout<<str1;
}
int main()
{
    char a[100], len;
    cin>>a;
    len = strlen(a);
    moveHash(a, len);
    return 0;
}