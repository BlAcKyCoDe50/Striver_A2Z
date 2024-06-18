#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;Node *next;Node *prev;
    Node(int data1)
    {
        val=data1;
        next=nullptr;
    }
};


//**********Extreme brute force************* */


//  bool isPalindrome(Node* head) 
//     {
//         Node *temp=head;
//         stack<int>st;
//         while(temp!=nullptr)
//         {
//             st.push(temp->val);
//             temp=temp->next;
//         }
//         temp=head;
//         while(temp!=nullptr)
//         {
//             if(temp->val!=st.top()) return false;
//                 st.pop();
//                 temp=temp->next;
//         }
//         return true;
//     }

//************Optimal Approach**************** */

ListNode* reverseList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return head;

    ListNode* newhead = reverseList(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newhead;
}

bool isPalindrome(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return true;

    // Find the middle of the linked list
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the linked list
    ListNode* secondHalfStart = reverseList(slow);
    ListNode* firstHalfStart = head;

    // Compare the first and second half
    ListNode* secondHalfCopy = secondHalfStart;
    while (secondHalfStart != nullptr) {
        if (firstHalfStart->val != secondHalfStart->val) {
            // Reverse the second half back before returning false
            reverseList(secondHalfCopy);
            return false;
        }
        firstHalfStart = firstHalfStart->next;
        secondHalfStart = secondHalfStart->next;
    }

    // Reverse the second half back to restore the original list
    reverseList(secondHalfCopy);
    return true;
}

main(){

Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(2);
    head->next->next->next=new Node(1);
    
    bool flag=isPalindrome(head);
    if(flag==1) cout<<"List is Palindrome";
    else cout<<"List is not a Palindrome";
return 0;
}