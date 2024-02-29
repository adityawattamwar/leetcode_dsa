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
    void check(TreeNode *root,int prev,int &cnt){
        if(root==NULL){
            return;
        }
        if(root->val>=prev){
            cnt++;
            
        }
        prev=max(prev,root->val);
        check(root->left,prev,cnt);
        check(root->right,prev,cnt);
    }
    int goodNodes(TreeNode* root) {
        int prev=INT_MIN;
        int cnt=0;
        check(root,prev,cnt);
        return cnt;
    }
};