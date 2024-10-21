/*

Given the head of a singly linked list, return the middle node of the 
linked list.

If there are two middle nodes, return the second middle node.

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 
3 and 4, we return the second one.
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

    Node* middleNode(Node* head) 
    {
        Node *temp=head;
        int cnt=0;
        while(temp!=nullptr)
        {
            temp=temp->next;
            cnt++;
        }
        temp=head;
        int mid=(cnt/2);
        cnt=0;
        while(temp!=nullptr)
        {
            if(cnt==mid)
            return temp;
            cnt++;
            temp=temp->next;
        }
        return head;  
    }


main(){
   Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);

    head=middleNode(head);
    cout<<head->data;
return 0;
}