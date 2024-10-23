   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        left = right = nullptr;
    }
};

    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> ans;
        queue<TreeNode*> que;

        que.push(root);
        while (!que.empty()) 
        {
            int n = que.size();
            long long sum = 0;

            while (n--) 
            {
                TreeNode* temp = que.front();
                que.pop();
                sum += (long long)temp->val;
                if (temp->left)
                    que.push(temp->left);
                if (temp->right)
                    que.push(temp->right);
            }
            ans.push_back(sum);
        }

        if (k > ans.size())
            return -1;
        sort(ans.begin(), ans.end(), greater<long long>());
        return ans[k - 1];
    }

main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << kthLargestLevelSum(root, 2);


 return 0;
 }