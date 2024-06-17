/*

Given the head of a singly linked list, reverse the list, 
and return the reversed list.

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Input: head = [1,2]
Output: [2,1]

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;Node*next;
    Node(int data1)
    {
        data=data;
    }
};

Node* reverseList(Node* head) 
    {
         stack<int>st;
         Node *temp=head;
         while(temp!=nullptr)
         {
            st.push(temp->data);
            temp=temp->next;
         }
        temp=head;
        while(temp!=nullptr)
        {
            temp->data=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;  
    }

main(){

    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);

    head=reverseList(head);
    

return 0;
}