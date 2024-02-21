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
    void solve(TreeNode *root,TreeNode *&temp,int val){
        if(root==NULL){
            return;
        }
        if(root->val==val){
            temp=root;
            return;
        }
        if(root->val>val){
            solve(root->left,temp,val);
        }
        else{
            solve(root->right,temp,val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *temp= NULL;
        solve(root,temp,val);
        return temp;
        
    }
};