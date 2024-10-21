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

 Node * reverse(Node*head)
{
    Node *temp=head;
    stack<int> st;
// ************brute force*******************

/*

1.create stack\
2. traverse the linked list and push the nodes into the stack
3. point temp again to the head
4. now again traverse the linked list and pop the elements and assigns
them to the current temp node data part.

*/
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

void traversal(Node *head)
{
    Node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

// ***************optimal approach***********************

// while(temp!=nullptr)
// {
    
// }
}

void traversal(Node *head)
{
    Node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp=temp->next;
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

    cout<<"Original Linked list: ";
    traversal(head);
    // head=reverse(head);
    cout<<endl;
    cout<<"reversal of the Linked list: ";
    head=reverse(head);
    traversal(head);

return 0;
}