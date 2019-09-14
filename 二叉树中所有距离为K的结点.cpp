#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
vector<int> res;
int k;
void getSubNode(TreeNode *root, int k)
{

    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        res.push_back(root->val);
    }
    getSubNode(root->left, k - 1);
    getSubNode(root->right, k - 1);
}
int dfs(TreeNode *root, TreeNode *target)
{

    if (root == NULL)
        return -1;
    if (root->val == target->val)
    {
        getSubNode(root, k);
        return k;
        //返回叶子到target的距离
    }
    int l = dfs(root->left, target);
    int r = dfs(root->right, target);
    if (l < 0 && r < 0)
    {
        return -1;
    }
    else if (l > 0)
    {
        if (l == 1)
            res.push_back(root->val);
        else
            getSubNode(root->right, l - 2);
        return l - 1;
    }
    else
    {
        if (r == 1)
            res.push_back(root->val);
        else
            getSubNode(root->left, r - 2);
        return r - 1;
    }
}
vector<int> distanceK(TreeNode *root, TreeNode *target, int K)
{
    k = K;
    dfs(root, target);

    return res;
}
int main()
{

    return 0;
}