#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ListNode
{
    public:
    int val;ListNode*next;
    ListNode(int d)
    {
      int  data=d;
        next=nullptr;
    }
};

// **********Brute force***************************

//  ListNode* oddEvenList(ListNode* head) 
//     {
//         if(head==NULL || head->next==nullptr)
//          return head;

//         ListNode *temp=head;
//         ListNode *prev=head;
//         vector<int>ans;
//         while(temp!=nullptr && temp->next!=nullptr)
//         {
//             ans.push_back(temp->val);
//             temp=temp->next->next;
//         }
//         if(temp) ans.push_back(temp->val);
//         temp=head->next;
//         while(temp!=nullptr)
//         {
//             ans.push_back(temp->val);
//             temp=temp->next->next;
//         }
//         if(temp) ans.push_back(temp->val);
        
//         temp=head;
//         int i=0;
//         while(temp!=nullptr)
//         {
//             temp->val=ans[i];
//             i++;
//             temp=temp->next;
//         }
//         return head;
//     }

//************Optimal********************************* */

ListNode* oddEvenList(ListNode* head) 
    {
        if (head == nullptr || head->next == nullptr)
        return head;

    ListNode* odd = head;
    ListNode* even = head->next;
     ListNode* evenHead = even; //we memoize this because the last node has to be technically poin to the first odd..
    //so we memioze this.

    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;

    }

main(){



return 0;
}