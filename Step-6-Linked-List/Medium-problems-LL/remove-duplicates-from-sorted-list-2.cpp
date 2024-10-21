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

Node* deleteDuplicates(Node* head) 
    {
        
       Node *temp = head;
       map<int,int>mp;

        while(temp!=nullptr)
        {
            mp[temp->data]++;
            temp = temp->next;
        }

        Node *dummyNode = new Node(0);
        Node *current = dummyNode;
        temp = head;

        while(temp!=nullptr)
        {
            if(mp[temp->data]==1)
            {
                current->next = new Node(temp->data);
                current=current->next;
            }
            temp = temp->next;
        }
        Node *newhead = dummyNode->next;
        return newhead;      
    }

main(){
  Node*head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
  head->next->next->next=new Node(3);
  head->next->next->next->next=new Node(4);
  head->next->next->next->next->next=new Node(4);
  head->next->next->next->next->next=new Node(5);

   head=deleteDuplicates(head);
  Node *temp= head;
  while(temp!=nullptr)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  return 0;
  }