/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int ans = 0;
    int heightTree(TreeNode* root,int *ptr) {
        if (!root) return 0;
        int l = heightTree(root->left,ptr);
        int r = heightTree(root->right,ptr);
        if(l+r>*ptr) *ptr=l+r;
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ptr=0;
        heightTree(root,&ptr);
        return ptr;
    }
};