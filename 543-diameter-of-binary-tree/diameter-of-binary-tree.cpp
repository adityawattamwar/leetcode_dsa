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
     pair<int,int> find(TreeNode *root)
{
    if(root==NULL){
        pair<int,int> p = make_pair(0,0);   //<height,diameter>
        return p;
    }
    pair<int,int> left = find(root->left);
    pair<int,int> right = find(root->right);
    
    pair<int,int> temp;
    temp.first = max(left.first , right.first) +1;
    temp.second = max(max(left.second , right.second) , left.first+right.first+1);
    return temp;
    
}



int diameterOfBinaryTree(TreeNode* root) {
    return find(root).second -1;
}
};