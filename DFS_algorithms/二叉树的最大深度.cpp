#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
int maxDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    // 先遍历到最后一层，然后回溯
    return max(maxDepth(root->left),maxDepth(root->right))+1;
}
int main()
{
    return 0;
}