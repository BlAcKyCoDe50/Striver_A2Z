#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }

    Node()
    {
        next=nullptr;
    }
};
Node* inputLL(Node* head){
    int n;
    cout<<"Enter the size: "<<endl;
    cin >> n;
    if(head==nullptr)
    {
        int data=0;
        cout<<"Enter the head data: "<<endl;
        cin>>data;
        Node *newhead = new Node(data);
        head = newhead;
    }
    

    Node* temp = head;
    
    for(int i = 0; i<n; i++){
        if(n==1) break;
        int data=0;
        cout<<"Enter the data: "<<endl;
        cin>>data;
        Node *newnode = new Node(data);
        temp->next = newnode;
        temp= temp->next;
    }
    return head;
}
void print(Node* head){
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}
int main()
{
    Node* head = nullptr;
    head = inputLL(head);
    print(head);

   return 0;
}