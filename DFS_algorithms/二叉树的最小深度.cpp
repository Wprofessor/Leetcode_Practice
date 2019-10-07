#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
int minDepth(TreeNode *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1;
    int min_depth = 99999;
    if (root->left)
        min_depth = min(min_depth, minDepth(root->left));
    if (root->right)
        min_depth = min(min_depth, minDepth(root->right));
    return min_depth+1;
}
int main()
{

    return 0;
}