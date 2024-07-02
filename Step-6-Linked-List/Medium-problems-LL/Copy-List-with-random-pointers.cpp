  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
  class Node{
  public:
  int data; Node *next; Node *random;
  Node(int data1) {
  data=data1;
   next=nullptr;
   random = nullptr;
  } 
  };


main(){
  Node*head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);

  return 0;
  }