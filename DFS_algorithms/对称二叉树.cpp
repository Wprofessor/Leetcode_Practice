#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
bool dfs(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    if (root1->val != root2->val)
        return false;
    return dfs(root1->left, root2->right) && dfs(root1->right, root2->left);
}
bool isSymmetric(TreeNode *root)
{
    return dfs(root,root);
}

int main()
{
    return 0;
}