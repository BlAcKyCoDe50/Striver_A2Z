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

     Node* removeNthFromEnd(Node* head, int n) 
    {
        Node *fast=head;
        for(int i=0;i<n;i++) fast=fast->next;
        
        Node *slow=head;
        if(fast==NULL) return head->next;
        while(fast->next!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }
        Node *delNext=slow->next;
        slow->next=slow->next->next;
        delete delNext;
        return head;
    }

main(){
Node*head=new Node(1);
head->next=new Node(2);
head->next->next=new Node(3);

return 0;
}