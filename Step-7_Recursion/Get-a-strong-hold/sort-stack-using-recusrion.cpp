
   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

   void insertAtBottom(int x,stack<int>&st)
{
    if(st.size()==0 || st.top()< x)
        st.push(x);
    else
    {
        int a = st.top();
        st.pop();
        insertAtBottom(x,st);
        st.push(a);
    }
}

void reverse(stack<int> &st)
{
    if(st.size()>0)
    {
        int x = st.top();
        st.pop();
        reverse(st);
        insertAtBottom(x,st);
    }
}

void sortt(stack<int> s)
{
   //Your code here
  reverse(s);
}
main(){

stack<int> s ;
s.push(1);
s.push(50);
s.push(30);
s.push(9);

sortt(s);

while(s.size()!=0)
{
    cout<<s.top()<<" ";
    s.pop();
}


 return 0;
 }