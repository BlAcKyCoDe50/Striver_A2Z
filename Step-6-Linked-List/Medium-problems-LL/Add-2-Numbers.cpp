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

Node* addTwoNumbers(Node* l1, Node* l2) 
    {
        Node *t1 = l1;
        Node *t2= l2;

        Node *dummyNode = new Node(-1);
        Node *curr = dummyNode;
        int carry=0;
        while(t1!=nullptr || t2!=nullptr)
        {
            int sum=carry;
            if(t1) sum+=t1->data;
            if(t2) sum+=t2->data;

            Node *newnode = new Node(sum%10);
            carry = sum/10;

            curr->next= newnode;
            curr = curr->next;

            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
        }
        if(carry)
        {
            Node *newnode = new Node(carry);
            curr->next = newnode;
        }
        return dummyNode -> next;
    }


main(){
  Node*head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);

  return 0;
  }