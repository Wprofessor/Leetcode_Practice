#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
vector<vector<int>> saveCount;
void assistDFS(TreeNode *root, int level)
{
    if (saveCount.size() == level)
    {
        vector<int> temp;
        saveCount.push_back(temp);
    }
    if(root)
    saveCount[level].push_back(root->val);
    if (root->left)
        assistDFS(root->left, level + 1);
    if (root->right)
        assistDFS(root->right, level + 1);
}
vector<vector<int>> levelOrder(TreeNode *root)
{
    if(!root)
    return saveCount;
    assistDFS(root, 0);
    return saveCount;
}
int main()
{

    return 0;
}