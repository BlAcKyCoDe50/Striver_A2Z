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

  // Node *getIntersectionNode(Node *headA, Node *headB) 
  //   {
  //       Node *temp=headA;

  //       map<Node*,int>mpp;
  //       while(temp!=nullptr)
  //       {
  //           mpp[temp]++;
  //           temp=temp->next;
  //       }
  //       temp=headB;
  //       while(temp!=nullptr)
  //       {
  //           if(mpp.find(temp)!=mpp.end())
  //               return temp;
  //           temp=temp->next;
  //       }
  //       return  nullptr;
  //   }

// *************************brute force**********************


//  Node *getIntersectionNode(Node *headA, Node *headB) 
//     {
//         Node *t1=headA;
//         Node *t2=headB;
//         int n1=0;int n2=0;
//         while(t1!=nullptr)
//         {
//             n1++;
//             t1=t1->next;
//         }

//         while(t2!=nullptr)
//         {
//             n2++;
//             t2=t2->next;
//         }
//         t1=headA;t2=headB;
//         int d=0;
//         if(n1>n2) d=n1-n2;
//         else if(n1<n2) d=n2-n1;
//         else d=0;

//         if(n1>n2)
//         {
//             while(d--) t1=t1->next;
//         }
//         else if(n2>n1)
//         {
//             while(d--) t2=t2->next;
//         }
        
//         while(t1!=nullptr && t2!=nullptr)
//         {
//             if(t1==t2) return t1;
//             t1=t1->next;
//             t2=t2->next;
//         }
//         return  nullptr;
//     }


// **********Optimal************************

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
       if(headA==nullptr || headB==nullptr) return nullptr;

        ListNode *t1=headA;
        ListNode *t2= headB;

        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;

            if(t1==t2) return t1;

            if(t1==nullptr) t1=headB;
            if(t2==nullptr) t2=headA;
        }
        return t1;
    }

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