#include<iostream>
#include<bits/stdc++.h>
  using namespace std;
  class Node{
  public:
  int data; Node *next;
  Node(int data1) {
  data=data1;
   next=nullptr;
  } 
  };

   
 Node *insertion(Node *head,int data)
 {
  Node *newNode= new Node(data);
  if(head==nullptr) 
  {
    head=newNode;
    return head;
  }
  Node *temp=head;
  while (temp->next!=nullptr)
  {
    temp=temp->next;
  }
  temp->next= newNode;
  return head;
 }

main(){
  
  int n;
  cout<<"Enter the number of elements: "<<endl;
  cin>>n;

  int head_data=0;
  Node *head=nullptr;

  for (int i = 0; i < n; i++)
  {
    int data=0;
    cout<<"Enter the data for the element "<<i<<": ";
    cin>>data;
    head=insertion(head,data);
  }

 
  Node *temp=head;
  // cout<<temp->data;
  while(temp!=nullptr)
{
  cout<<temp->data<<" ";
  temp=temp->next;
}

  return 0;
  }
