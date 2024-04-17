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
    void check(vector<string> &temp,TreeNode *root,string&str){
        if(root==NULL){
            return;
        }
        str+=(root->val+'a');
        if(root->left==NULL and root->right==NULL){
            temp.push_back(str);
        }
        
        check(temp,root->left,str);
        check(temp,root->right,str);
        str.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string> temp;
        string str;
        check(temp,root,str);
        for(int i=0;i<temp.size();i++){
            reverse(temp[i].begin(),temp[i].end());        
        }
        string final=temp[0];
        int mini=INT_MAX;
        int sizi=INT_MAX;
        
        for(int i=1;i<temp.size();i++){
            //   if(temp[i][0]-'a'<=mini ){
            //     if(temp[i].size()<sizi and temp[i][0]-'a'<mini ){
            //         final=temp[i];
            //         sizi=temp.size();
            //         mini=(temp[i][0]-'a');
            //     }
            //     else if(temp[i][0]-'a'<mini){
            //     final=temp[i];
            //     mini=(temp[i][0]-'a');
            //     sizi=temp.size();
            //     }
            //     else{
            //         if(temp[i].size()<sizi){
            //         final=temp[i];
            //         sizi=temp.size();
            //         }
            //     }
            // }
            final=min(final,temp[i]);
        }
        return final;
    }
};