#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
int maxTreeSize(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return max(maxTreeSize(root->left), maxTreeSize(root->right)) + 1;
}
bool isBalanced(TreeNode *root)
{
   if(root == NULL)
    return true;
    int d = abs(maxTreeSize(root->left) - maxTreeSize(root->right));
    return d <= 1 && isBalanced(root->left) && isBalanced(root->right);
}
int main()
{

    return 0;
}