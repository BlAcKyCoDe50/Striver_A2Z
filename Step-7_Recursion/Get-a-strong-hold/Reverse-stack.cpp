   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

     
    void insertAtBottom(char x,stack<int> &St)
    {
        if(St.size()==0)
        {
        St.push(x);
        // St.pop();
        }
        else
        {
            char a = St.top();
            St.pop();
            insertAtBottom(x,St);
            St.push(a);
        }
    }
    
    void Reverse(stack<int> &St)
    {
        if(St.size()>0)
        {
            char x = St.top();
            St.pop();
            Reverse(St);
            insertAtBottom(x,St);
        }
    }


main(){
 
 stack<int> st;
 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);
 st.push(5);

cout<<"Stack before reversal: ";
// Reverse(st);
stack<int> copy = st;
while(copy.size()!=0)
{
    cout<<copy.top()<<" ";
    copy.pop();
}
cout<<endl;
cout<<"Stack After reversal: ";
Reverse(st);
while(st.size()!=0)
{
    cout<<st.top()<<" ";
    st.pop();
}

 return 0;
 }