#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*next;

    //constructor to intialize a new node
    Node(int value)
    {
        data=value;
        // next=nullptr; //nullptr means it is not pointing to any object or memory
    }
};
void InsertionAtBeginning( Node**head,int data)
{
    Node*new_node= new Node(data);
    new_node->next= (*head);
    (*head)=new_node;
}   

main()
{
    Node *head;
    head->data=0;
    head->next=nullptr;
    InsertionAtBeginning(&head,1);
    InsertionAtBeginning(&head,2);
    InsertionAtBeginning(&head,4);
    InsertionAtBeginning(&head,8);

    Node *temp=head;
    cout<<"Linked List: "<<endl;
    // for(temp=head;temp!=NULL;temp=temp->next)
    // {
    //     cout<<temp->data<<"--> ";
    // }

    //using while loop 
    while(temp!=nullptr)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    if(temp==NULL) cout<<"NULL";
}
