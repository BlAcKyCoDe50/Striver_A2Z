  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
  class Node {
  public:
  int data; Node *next;
  Node(int data1){
  data=data1;
  next=nullptr;
  }
  };
// *********************brute force*********************************
//    Node* segregate(Node *head) {
        
//         // Add code here
//         Node *temp=head;
//         vector<int>arr;
//         while(temp!=nullptr)
//         {
//             arr.push_back(temp->data);
//             temp=temp->next;
//         }
//         sort(arr.begin(),arr.end());
//         temp=head;
//         int i=0;
//         while(temp!=nullptr)
//         {
//             temp->data= arr[i];
//             i++;
//             temp=temp->next;
//         }
//         return head;
//     }

// *********************Optimized Solution***************************


 Node* segregate(Node *head) 
    {
        
        // Add code here
        Node *temp=head;
        vector<int> arr{0,0,0};
        while(temp!=nullptr)
        {
          arr[temp->data]++;
          temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp!=nullptr)
        {
            if(arr[i]==0) i++;
            else
            {
                temp->data=i;
                arr[i]--;
                temp=temp->next;
            }
        }
        return head;
    }

    void traversal(Node *head)
    {
    Node *temp=head;
    while(temp!=nullptr)
      {  
        cout<<temp->data<<" ";
        temp=temp->next;
      }
    }  

main(){
  Node*head=new Node(1);
  head->next=new Node(0);
  head->next->next=new Node(2);
  head=segregate(head);
  traversal(head);
  return 0;
  }