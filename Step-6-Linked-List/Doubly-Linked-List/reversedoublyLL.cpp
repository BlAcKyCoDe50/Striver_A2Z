#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;Node *next;Node *prev;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

 void reverse(Node*head)
{
    Node *temp=head;
    while(temp->next!=nullptr) temp=temp->next;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
} 


main(){


    Node *head=new Node(1);
    head->prev=nullptr;
    head->next=new Node(2);
    head->next->prev=head;
    head->next->next= new Node(3);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(4);
    head->next->next->next->prev=head->next->next;

    reverse(head);

return 0;
}