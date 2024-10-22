#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        left = right = nullptr;
    }
};

void inOrder(struct TreeNode *root)
{
    if (root == nullptr)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

void preOrder(struct TreeNode *root)
{
    if (root == nullptr)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct TreeNode *root)
{
    if (root == nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

void bfs(struct TreeNode *root)
{
    if (root == nullptr)
        return;
    queue<TreeNode *> que;
    que.push(root);

    while (!que.empty())
    {
        TreeNode *tempNode = que.front();
        que.pop();
        cout << tempNode->val << " ";
        if (tempNode->left != nullptr)
            que.push(tempNode->left);
        if (tempNode->right != nullptr)
            que.push(tempNode->right);
    }
}

main()
{

    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    // creating a left child for the root's leftnode
    root->left->left = new TreeNode(4);
    // printing the tree
    cout << "Inorder traversal of the tree is: ";
    inOrder(root);
    cout << endl;
    cout << "Preorder traversal of the tree is: ";
    preOrder(root);
    cout << endl;
    cout << "Postorder traversal of the tree is: ";
    postOrder(root);
    cout << endl;
    cout << "BFS traversal of the tree is: ";
    bfs(root);

    return 0;
}