#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data; Node *next;
Node(int data1){
data=data1;
next=nullptr;
}
};

    Node *mid(Node *head)
    {
        Node *slow=head;
        Node *fast=head;
        fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    Node *mergeTwoLists(Node *leftList,Node *rightList)
    {   
        Node *dummyNode =new Node(-1);
        Node *temp=dummyNode;

        while(leftList!= nullptr && rightList!=nullptr)
        {
            if(leftList->data < rightList->data)
            {
                temp->next=leftList;
                temp=leftList;
                leftList=leftList->next;
            }
            else
            {
                temp->next=rightList;
                temp=rightList;
                rightList=rightList->next;
            }
        }
        if(leftList) temp->next=leftList;    
        else temp->next=rightList;

        return dummyNode->next;
        }

    //**********main function********************
    Node* sortList(Node* head) 
    {
        if(head==NULL || head->next==nullptr) return head;
        
        Node *middle= mid(head);
        // cout<<middle->data;
        
        Node *left=(head);
        Node *right=middle->next;
        middle->next=nullptr;

        left=sortList(left);
        right=sortList(right);
        // cout<<"left: "<<left->data<<endl;
        // cout<<"right: "</<right->data<<endl;
        return mergeTwoLists(left,right);    
    }

void traversal(Node *head)
{
    Node *temp=head;
    while(temp!=nullptr)
      {  
        cout<<temp->data<<" ";
        temp=temp->next;
      }
}


main(){
Node*head=new Node(3);
head->next=new Node(2);
head->next->next=new Node(1);
head->next->next->next=new Node(4);
head=sortList(head);
traversal(head);
return 0;
}