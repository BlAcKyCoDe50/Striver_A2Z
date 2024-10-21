#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;Node *next;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

Node *reverse(Node *head)
{
    Node *temp=head;
    Node *prev=nullptr;
    while (temp!=nullptr)
    {
       Node *next=temp->next;
       temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;   
}

main(){

    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);

head = reverse(head);
while (head != nullptr) {
  cout << head->data << " ";
  head = head->next;
}

return 0;
}