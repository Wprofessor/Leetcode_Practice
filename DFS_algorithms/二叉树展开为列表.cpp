#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
void flatten(TreeNode *root)
{
    if (!root)
        return;
    flatten(root->left);
    flatten(root->right);
    TreeNode *temp;
    temp = root->right;
    root->right = root->left;
    root->left = NULL;
    while (root->right)
        root = root->right;
    root->right = temp;
}
int main()
{

    return 0;
}