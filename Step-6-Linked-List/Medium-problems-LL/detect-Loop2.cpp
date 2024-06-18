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


//*****brute force solution************ */
// Node *detectLoop(Node *head)
// {
//     Node *temp=head;
//     map<Node*,int>mpp;
//     while(temp!=nullptr)
//         {
//             if(mpp.find(temp)!=mpp.end()) return temp;
//             mpp[temp]=1;
//             temp=temp->next;
//         }
//         return NULL;
// }

//**************Optimal Solution************** */

bool hasCycle(ListNode *head) 
    {
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }

