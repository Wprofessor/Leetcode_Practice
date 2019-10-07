#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
TreeNode *changeDFS(vector<int> &nums, int left, int right)
{
    if (left > right)
        return NULL;
    int mid = (left + right) / 2;
    TreeNode *root;
    root->val = nums[mid];
    root->left = changeDFS(nums, left, mid - 1);
    root->right = changeDFS(nums, mid + 1, right);
    return root;
}
TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return changeDFS(nums, 0, nums.size() - 1);
}
int main()
{

    return 0;
}