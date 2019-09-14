#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
void dfs(TreeNode* node,vector<int> &save){
    if(node == NULL)
    return ;
    if(node->left == NULL && node->right == NULL)
    save.push_back(node->val);
    dfs(node->left,save);
    dfs(node->right,save);
}
bool leafSimilar(TreeNode* root1,TreeNode* root2){
    vector<int> save1;
    vector<int> save2;
    dfs(root1,save1);
    dfs(root2,save2);
    if(save1.size() != save2.size())
    return false;
    for (int i = 0; i < save1.size(); i++)
    {
        if(save1[i] != save2[i])
        return false;
    }
    return true;
    
}
int main()
{

    return 0;
}