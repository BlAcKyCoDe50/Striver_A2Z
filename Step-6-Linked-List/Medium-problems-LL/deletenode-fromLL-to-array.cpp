   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* modifiedList(vector<int>& nums, ListNode* head) 
    {
        ListNode * tmp = head;
        set<int>st;
        
        ListNode *ptemp = tmp;
        for(auto it : nums) st.insert(it);
        // for(auto it:nums) cout<<it<<" ";
        ListNode*ll = new ListNode();
        ListNode *ntmp = ll;
        int cnt = 0;
        bool flag = false;
        while(tmp!=nullptr)
        {
            if(st.find(tmp->val)!=st.end())
            {
                cout<<"run3"<<endl;
                tmp = tmp->next;
            }
            if(st.find(tmp->val)==st.end() && cnt==0)
            {
                ll->val = tmp->val;
                cnt++;
                cout<<"run1"<<endl;
                cout<<"ll->data: "<<ll->val<<endl;
                if(tmp->next==nullptr) flag = true;
            }
            if(flag) break;
            if(st.find(tmp->val)==st.end() && cnt!=0)
            {
                ntmp->next = new ListNode(tmp->val);
                cout<<"run2"<<endl;
                cout<<"ntmp->data: "<<ntmp->val<<endl;
                tmp=tmp->next;
                ntmp=ntmp->next;
            }
           
        }
        if(ll!=nullptr) return ll; 
        else return head;
    }

main(){
 
 vector<int>arr = {1};
ListNode *head = new ListNode(1);
head->next = new ListNode(52502);
// head->next->next = new ListNode(1);
// head->next->next->next = new ListNode(2);
// head->next->next->next->next = new ListNode(1);
// head->next->next->next->next->next = new ListNode(2);

//  =  new ListNode();
ListNode *res = modifiedList(arr,head);
ListNode *tmp = res;
while(tmp!=nullptr) 
{
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
 return 0;
 }