#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data; Node *next;
Node(int data1){
data=data1;
}
};

Node* deleteMiddle(Node* head) 
    {
        if(head==nullptr || head->next==nullptr) return nullptr;

        Node *slow=head;
       Node *fast=head;
       fast=fast->next->next;

       while(fast!=nullptr && fast->next!=nullptr)
       {
        slow=slow->next;
        fast=fast->next->next;
       }
       Node *temp=slow->next;
       slow->next=slow->next->next;
       delete temp;
       return head;
    }
main(){
Node*head=new Node(1);
head->next=new Node(2);
head->next->next=new Node(3);
head->next->next->next=new Node(4);
head=deleteMiddle(head);






return 0;
}