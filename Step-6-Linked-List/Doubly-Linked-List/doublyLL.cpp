#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;Node* prev;Node* next;
    Node(int data1)
    {
        data=data1;
        prev=nullptr;
        next=nullptr;
    }
};

void traversal(Node *head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node *insertAtpos(Node *head,int value,int pos)
{
    Node *temp=head;
    Node *newnode= new Node(0);
    
    if(pos==1)
    {
        if(head!=nullptr)
        {
            newnode->next=head;
            head->prev=newnode;
        }
        head=newnode;
        return head;
    }

    int cnt=1;
    while (temp!=nullptr && cnt<pos-1)
    {
        cnt++;
        temp=temp->next;
    }

    if(temp==nullptr ) 
        {
            delete newnode;
            cout<<endl;
            cout<<"position is out of the range"<<endl;
            return head;
        }
        
            newnode->next=temp->next;
            newnode->prev=temp;

        if(temp->next!=nullptr)
        {
            temp->next->prev=newnode;    
        }
        temp->next=newnode;
        
    return head;
}

Node *insertAtend(Node *head)
{
    Node *temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }

    Node *newnode= new Node(10);
    temp->next= newnode;
    newnode->next=nullptr;
    newnode->prev=temp;

    return head;
}

Node *insertionBeforePos(Node *head,int data,int pos)
{
    pos--;
    Node *newnode= new Node(data);
    if(pos==1)
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return head;
    }

    Node *temp= head;
    int cnt=1;
    while (temp!=nullptr && cnt < pos-1)
    {
        cnt++;
        temp=temp->next;
    }

    newnode->next=temp->next;
    newnode->prev=temp;
    
    if(temp->next!=nullptr)
    {
        temp->next->prev=newnode;
    }
    temp->next=newnode;
    return head;
}

Node *insertionAfterPos(Node *head,int data,int pos)
{
    // pos--;
    Node *newnode= new Node(data);
    if(pos==1)
    {
       newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return head;
    }

    Node *temp= head;
    int cnt=1;
    while (temp!=nullptr && cnt != pos)
    {
        cnt++;
        temp=temp->next;
    }

    // temp->next=newnode;
    newnode->prev=temp;
    newnode->next=temp->next;
    
    if(temp->next!=nullptr)
    {
        temp->next->prev=newnode;
    }
    temp->next=newnode;
    return head;
}

Node *deletionAthead(Node *head)
{
    Node *temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
    return head;
}

Node*deletionAtend(Node *head)
{
    Node*temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

Node *deletionAtValue(Node *head,int value)
{
    Node *temp=head;
    while(temp!=nullptr )
    {
       if(temp->data==value)
       {
        
        // if(temp->next==nullptr)
        // {
        //     temp->prev->next=nullptr;
        //     delete temp;
        //     return head;
        // }
        if(temp->next->prev!=nullptr)
        {
            cout<<"in the last node"<<endl;
            temp->next->prev=temp->prev;
        }
        
        if(temp->prev!=nullptr && temp->next!=nullptr)
        {
            temp->prev->next=temp->next;
        }
        delete temp;
        return head;
       }
       temp=temp->next;
    }
    return head;
}

 void reversePrint(Node*head)
{
    Node *temp=head;
    while(temp->next!=nullptr) temp=temp->next;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
} 

Node * reverseLL(Node*head)
{
    Node *temp=head;
    stack<int> st;
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

    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->prev=head;
    head->next->next= new Node(3);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(4);
    head->next->next->next->prev=head->next->next;

    traversal(head);
    head=insertAtpos(head,0,3);
    cout<<endl;
    
    cout<<"Traversal after inserting at Position: ";
    traversal(head);
    cout<<endl;

    cout<<"Insertion at the end: ";
    insertAtend(head);
    traversal(head);
    cout<<endl;

    cout<<"insertion before the position: ";
    head=insertionBeforePos(head,5,1);
    traversal(head);
    cout<<endl;

    cout<<"insertion after the position: ";
    head=insertionAfterPos(head,6,1);
    traversal(head);
    cout<<endl;

    cout<<"Linked list after deleting the head: ";
    head=deletionAthead(head);
    traversal(head);
    cout<<endl;

    cout<<"Linked list after deletion at the end: ";
    head=deletionAtend(head);
    traversal(head);
    cout<<endl;

    cout<<"Deleting a particular node: ";
    head=deletionAtValue(head,2);
    traversal(head);
    cout<<endl;

    cout<<"reversed  the Linked list: ";
    // reversePrint(head);
   head= reverseLL(head);
   traversal(head);

return 0;
}