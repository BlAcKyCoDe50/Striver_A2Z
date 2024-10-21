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


     Node* rotateRight(Node* head, int k) 
    {
        if(head==nullptr || head->next == nullptr) return head;
        Node *temp = head;
        
        int length =1;
        while(temp->next!=nullptr)
        {
            length++;
            temp = temp->next;
        }

        temp->next = head;
        k = k % length;
        int end = length - k;
       
       while(end--) temp= temp ->next;
        head = temp->next;
        temp->next = nullptr;

        return head;
    }

    void printList(Node* head) {
    while(head->next != NULL) {
        cout<<head->data<<"->";
        head = head->next;
    } 
    cout<<head->data<<endl;
    return;
}

    void insertNode(Node* &head,int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

main(){
  Node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    
    cout<<"Original list: ";
    printList(head);
    
    int k = 2;
    Node* newHead = rotateRight(head,k);//calling function for rotating right of the nodes by k times
    
    cout<<"After "<<k<<" iterations: ";
    printList(newHead);//list after rotating nodes
    return 0;
  }