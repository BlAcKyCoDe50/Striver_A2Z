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

main(){

    vector<int>arr={10,20,30,40};
    Node *head=ConvertToLL(arr); //this will create the pointer to the node object
    // Node *temp=gh
    cout<<endl;
return 0;
}