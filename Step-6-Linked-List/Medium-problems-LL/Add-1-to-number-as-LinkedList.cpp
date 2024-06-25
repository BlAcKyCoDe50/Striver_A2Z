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

//  Node *reverse(Node *head)
//     {
//        if(head==nullptr || head->next==nullptr) return head;
       
//        Node *temp=head;
//        Node *prev=nullptr;
//        Node *front;
       
//        while(temp!=nullptr)
//        {
//            front=temp->next;
//            temp->next=prev;
//            prev=temp;
//            temp=front;
//        }
//        return prev;
//     }
    
//     Node* addOne(Node *head) 
//     {
//         // Your Code here
//         // return head of list after adding one
//         head=reverse(head);
//         Node *temp=head;
//         int carry=1;
//         while(temp!=nullptr)
//         {
//             temp->data=temp->data+carry;
//             if(temp->data< 10)
//             {
//                 carry=0;break;
//             }
//             else
//             {
//                 temp->data=0;
//                 carry=1;
//             }
//             temp=temp->next;
//         }
//         if(carry==1)
//         {
//             Node *newnode = new Node(1);
//             head=reverse(head);
//             newnode->next=head;
//             return newnode;
//         }
//         else
//             head=reverse(head);
//             return head;
//     }

// ************using recursion****************

int addhelper(Node *temp)
    {
        int carry=1;
        if(temp==nullptr) return 1;
        carry = addhelper(temp->next);
        temp->data+=carry;
        if(temp->data < 10) return 0;
        else
        {
            temp->data = 0;
            return 1;
        }
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
    
        int carry = addhelper(head);
        if(carry==1)
        {
            Node *newnode= new Node(1);
            newnode->next=head;
            head=newnode;
            return head;
        }
        return head;
    }


main(){
  Node*head=new Node(9);
//   head->next=new Node(2);
//   head->next->next=new Node(3);

    head=addOne(head);

    Node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
    }
  return 0;
  } 