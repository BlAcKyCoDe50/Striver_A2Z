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

//************Brute force ***************** */
// bool detectLoop(Node *head)
// {
//     Node *temp=head;
//     map<Node*,int>mpp;
//     while(temp!=nullptr)
//         {
//             if(mpp.find(temp)!=mpp.end()) return true;
//             mpp[temp]=1;
//             temp=temp->next;
//         }
//         return false;
// }

//****************Optimized approach****************** */
bool detectLoop(Node *head)
{
    Node *temp=head;
    Node *slow=head;
    Node *fast=head;

    while (fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}
