  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
  class Node{
  public:
  int data; Node *next; Node*prev;
  Node(int data1) {
  data=data1;
   next=nullptr;
  } 
  };


    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node *temp = head;
        
        while(temp!=nullptr && temp->next!=nullptr)
        {
            Node *nextnode = temp->next;
            while(nextnode!=nullptr && temp->data == nextnode->data)
            {
                    nextnode = nextnode -> next;
            }
            temp->next=nextnode;
            if(nextnode) nextnode->prev= temp;
            temp = temp->next;
        }
        return head;
    }

main(){
  Node*head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
head->next->next->next=new Node(3);

  head = removeDuplicates(head);
  Node *temp = head;
  while(temp!=nullptr)
  {
    cout<<temp->data<<" ";
    temp= temp->next;
  }
  return 0;
  }