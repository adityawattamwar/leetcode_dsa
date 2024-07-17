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
private:
    void traverse(TreeNode* root,TreeNode* parent,bool isLeft,unordered_set<int> &s,vector<TreeNode*> &ans){
        if(!root) return;
        traverse(root->left,root,true,s,ans);
        traverse(root->right,root,false,s,ans);
        if(s.find(root->val)!=s.end()){
            if (parent){
                if(isLeft) parent->left=NULL;
                else parent->right=NULL;
            }
            if(root->left){
                ans.push_back(root->left);
            } 
            if(root->right){
                ans.push_back(root->right);
            } 
        }
    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> s;
        for(int i=0;i<to_delete.size();++i){
            s.insert(to_delete[i]);
        }
        vector<TreeNode*> ans;
        if(s.find(root->val)==s.end()) ans.push_back(root);
        traverse(root,NULL,false,s,ans);
        return ans;
    }
};