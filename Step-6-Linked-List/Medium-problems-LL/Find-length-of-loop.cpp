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

int countNodesinLoop(struct Node *head)
{
    // Code here
    Node *slow=head;
    Node *fast=head;
    Node *start;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            start=slow->next;
            int cnt=1;
        while(start!=slow)
        {
            cnt++;
            start=start->next;
            
        }
        return cnt;   
        }
    }
    
    return 0;
}

main(){
int n;
cin>>n;
vector<int> arr(n);

return 0;
}