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

// ******************brute force****************

// Node* reverseList(Node* head) 
//     {
//          stack<int>st;
//          Node *temp=head;
//          while(temp!=nullptr)
//          {
//             st.push(temp->data);
//             temp=temp->next;
//          }
//         temp=head;
//         while(temp!=nullptr)
//         {
//             temp->data=st.top();
//             st.pop();
//             temp=temp->next;
//         }
//         return head;  
//     }

//****************Optimal approach************ */

// Node *reverseList(Node *head)
// {
//     Node*slow=head;
//     Node *fast=head;

//     while(fast!=nullptr || fast->next!=nullptr)
//     {   
//         slow=slow->next;
//         fast=fast->next;
//     }
//     return head;
// }

// *********optimal 2*************

// Node* reverseList(Node* head) 
//     {
//         Node *temp=head;
//         Node *prev=nullptr;
//         Node *front;
//         while(temp!=nullptr)    
//         {
//             front=temp->next;
//             temp->next=prev;
//             prev=temp;
//             temp=front;
//         }
//         return prev;  
//     }

//*****************optimal 3 ********************** */

Node* reverseList(Node* head) 
    {
        if(head==nullptr || head->next==nullptr) return head;

        Node *newhead=reverseList(head->next);
        cout<<"execute"<<endl;
        Node *front=head->next;
        front->next=head;
        head->next=nullptr;
        return newhead;  
    }
void traverse(Node *head)
{
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
main(){

    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head=reverseList(head);
    traverse(head);

return 0; 
}