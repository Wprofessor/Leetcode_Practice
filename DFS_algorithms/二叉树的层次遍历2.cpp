/**
 * 给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
 */
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
void DFS(TreeNode *root, vector<vector<int>> &saveCounte, int height)
{
    if (root == NULL)
        return;
    vector<int> temp;
    if (saveCounte.size() <= height)
    {
        saveCounte.push_back(temp);
    }
    saveCounte[height].push_back(root->val);
    DFS(root->left, saveCounte, height + 1);
    DFS(root->right, saveCounte, height + 1);
}
vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> saveCount;
    DFS(root, saveCount, 0);
    reverse(saveCount.begin(), saveCount.end());
    return saveCount;
}

int main()
{

    return 0;
}