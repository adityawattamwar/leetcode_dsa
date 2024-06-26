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
    void make(TreeNode *cur,vector<int>&v){
        if(cur==NULL)return;
        make(cur->left,v);
        v.push_back(cur->val);
        make(cur->right,v);
    }
    TreeNode* call(int l,int r,vector<int>&v){

        if(l>r)return NULL;
        int mid=(l+r)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=call(l,mid-1,v);
        root->right=call(mid+1,r,v);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>now;
        make(root,now);
        int n=now.size();
        return call(0,n-1,now);
    }
};