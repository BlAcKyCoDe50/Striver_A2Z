  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
  class Node{
  public:
  int data; Node *next;
  Node *prev;
  Node(int data1) {
  data=data1;
   next=nullptr;
  } 
  };

void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
       Node *temp = *head_ref;
       
       while(temp!=nullptr)
       {
           if(temp->data == x)
           {
               if( temp== *head_ref)
               {
                   *head_ref= temp->next;
               }
               Node *nextnode = temp->next;
               Node *prevnode = temp->prev;
               
               if(nextnode!=nullptr) nextnode->prev = prevnode;
               if(prevnode!=nullptr) prevnode->next = nextnode;
               
               delete temp;
               temp = nextnode;
           }
           else temp = temp -> next;
       }
    }

main(){
  Node*head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);

  return 0;
  }