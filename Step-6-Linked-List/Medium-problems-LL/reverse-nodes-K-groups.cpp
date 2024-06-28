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

  Node *reverseLink(Node *head)
    {
        Node *temp = head;
        Node * front ;
        Node * prev= nullptr;

        while(temp!=nullptr)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    
    Node *getKthNode(Node *temp , int k)
    {
        k-=1;
        while(temp!=nullptr && k>0)
        {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    
    Node* reverseKGroup(Node* head, int k) 
    {
       Node *temp= head;
       Node *prevLast = nullptr;
       while(temp!=nullptr)
       {
        Node *KthNode = getKthNode(temp,k);
        if(KthNode==NULL)
        {
            if(prevLast) 
            {
                prevLast->next = temp;
               
            }
             break;
        }
        
        Node *nextnode = KthNode -> next;
        KthNode -> next = nullptr;
        reverseLink(temp);
        if(temp==head)
        {
            head = KthNode;
        }
        else
        {
            prevLast->next = KthNode;
        }

        prevLast = temp;
        temp = nextnode;
       }
       return head;
    }
main(){
  Node*head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);

  return 0;
  }