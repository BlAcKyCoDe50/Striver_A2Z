  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
  class Node{
  public:
  int data; Node *next; Node *prev;
  Node(int data1) {
  data=data1;
   next=nullptr;
  } 
  };

  vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // 11000 tests cases passed on GFG, 10 testcases remaining
        vector<pair<int, int>> ans;
        Node *firstnode = head;
        Node *secondnode;
        
        while(firstnode!=nullptr)
        {
            secondnode= firstnode->next;
            while(secondnode!=nullptr)
            {
                if(secondnode->data + firstnode->data == target)
                {
                 ans.push_back(make_pair(firstnode->data , secondnode->data));   
                }
                secondnode = secondnode->next;
            }
            firstnode = firstnode -> next;
            
        }
      return ans;
    }
main(){
  Node*head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);

  return 0;
  }