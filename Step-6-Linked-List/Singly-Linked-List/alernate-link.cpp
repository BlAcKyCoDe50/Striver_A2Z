#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;Node *next;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};



main()
{
    Node *head  = new Node(2); 
    head->next  = new Node(4);
     head->next->next  = new Node(6);
     head->next->next->next  = new Node(8);
     head->next->next->next->next  = new Node(10);
    //  head->next->next->next->next->next  = new Node(6);
     
    int cnt = 0;
    Node *t1 = head;
    Node *t2 = head->next;
    Node *tracker = head->next;
    while(t1!=nullptr)
    {
        cnt++;
        t1 = t1->next;
    }
    t1 = head;
    if(cnt%2==0)
    {
        while(t2->next!=nullptr)
        {
            t1 ->next = t2->next;
            t1 = t1->next;
            if(t1->next!=nullptr)
            {
            t2->next = t1->next;
            t2 = t2->next;
            }
            else t2->next=nullptr;
        }
        t1->next = tracker;
        // cout<<t2->data;
        // head = t1;
    }
    else
    {
         while(t1->next!=nullptr)
        {
            t1 ->next = t2->next;
            t1 = t1->next;
            if(t1->next!=nullptr)
            {
                t2->next = t1->next;
                t2 = t2->next;
            }
            else t2->next=nullptr;
            
        }
        t1->next = tracker;
        // cout<<t2->data;
        // head = t1;
    }
    // cout<<tracker->data;
    Node *temp = head;
    // cout<<temp->data<<" "<<temp->next->data<<temp->next->next->data<<temp->next->next->next->data<<temp->next->next->next->next->data<<" "<<temp->next->next->next->next->next->data;
    while(temp!=nullptr)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}