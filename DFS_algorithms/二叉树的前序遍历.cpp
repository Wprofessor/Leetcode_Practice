#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
vector<int> saveNode;
void treeDFS(TreeNode *root)
{
    if (!root)
        return;
    saveNode.push_back(root->val);
    treeDFS(root->left);
    treeDFS(root->right);
}
vector<int> preorderTraversal(TreeNode *root)
{
    treeDFS(root);
    return saveNode;
}
int main()
{

    return 0;
}