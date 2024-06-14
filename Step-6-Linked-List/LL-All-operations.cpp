#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;Node*next;

    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

void traversal(Node* head)
{
    
    Node* temp=head;
    // cout<<"functions";
    while(temp!=nullptr)
    {
        
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *deletetail(Node *head)
{
    if(head==nullptr || head->next==nullptr) return nullptr;
    
    Node *temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

  int LengthofLL(Node *head)
{
    int cnt=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        // cout<<temp->data<<" ";
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

Node * ConvertToLL(vector<int>&arr)
{
    Node *head=new Node(arr[0]);
    Node *mover=head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        // cout<<temp->data<<"-->";
    }
    return head;
}

Node *DeleteAtK(Node *head,int k)
{
    
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=1;Node *temp=head;Node* prev=nullptr;
    while(temp->next!=nullptr)
    {
        
        prev=temp;
        temp=temp->next;
        cnt++;
        
        if(cnt==k)
        {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
    }
    return head;
}

Node *insertAtBegin(Node *head,int k)
{
    Node *newEl= new Node(k);
    newEl->next=head;
    head=newEl;
    return head;
}

Node *insertAtend(Node *head,int k)
{
    Node *newEl= new Node(k);
    Node *temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newEl;
    newEl->next=nullptr;
    return head;
}

Node *DeleteAthead(Node *head)
{
    Node *temp=head;
    head=head->next; //head ko aagay bdhaa diya 
    delete temp;
    // head->next->next;
    return head;
}

Node *insertAtpos(Node *head,int data ,int pos)
{
    int cnt=0;
    Node *temp=head;
    Node *newnode= new Node(data);

    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }

    for(int i=1;i<pos-1 && temp!=nullptr;i++)
    {
        temp=temp->next;
    }

    if(temp==nullptr)
    {
        delete newnode;
        cout<<"Position out of bounds"<<endl;
        return head;
    }
    // newnode->next=temp->next->next;
    newnode->next=temp->next;
    temp->next=newnode;
    
    return head;
}

Node *insertBeforeVal(Node *head,int value,int stopVal)
{
    if(head==nullptr) return NULL;

    if(head->data==stopVal)
    {
        Node *newel= new Node(value);
        newel->next=head;
        head=newel;
        return head;
    }
    
    Node *temp=head;
    Node *newval=new Node(value);
    while(temp->next!=nullptr)
    {
        if(temp->next->data==stopVal)
        {
            newval->next=temp->next;
            temp->next=newval;
            return head;
        }
        temp=temp->next;
    }
    cout<<"Value not found!!"<<endl;
    delete newval;
    return head;
}


main(){
 vector<int>arr={10,20,30,40};
    Node *head=ConvertToLL(arr); //this will create the pointer to the node object
    // Node *temp=ghsZ
    traversal(head);
    cout<<endl;
    cout<<"Length of the linked list: "<<LengthofLL(head)<<endl;
    deletetail(head);
    
    cout<<"Linked List after deleting the tail: "<<endl;
    traversal(head);
    cout<<endl;
    DeleteAtK(head,2);
    
    cout<<"Linked List after deleting at position 2"<<endl;
    traversal(head);
    cout<<endl;
    
    cout<<"Insertion at begin: "<<endl;
    head=insertAtBegin(head,0);
    traversal(head);

    cout<<"Inserting At end: "<<endl;
    insertAtend(head,100);
    traversal(head);
    cout<<endl;
    
    cout<<"Deletion At Begin: "<<endl;
    head=DeleteAthead(head);
    traversal(head);
    cout<<endl;

    cout<<"Insertion at a specific position: "<<endl;
    head=insertAtpos(head,20,1);
    traversal(head);
    cout<<endl;

    cout<<"Insertion before value: "<<endl;
    head=insertBeforeVal(head,40,10);
    traversal(head);


return 0;
}