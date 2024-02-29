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
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *front = q.front();
            q.pop();
            if(front==NULL){
                    ans.push_back(temp);
                    temp.clear();
                    if(!q.empty()){
                        q.push(NULL);
                    }
            }
            else{
                temp.push_back(front->val);
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
        }
        for(int i=0;i<ans.size();i++){
            if(i==0 || ans[i].size()==1){
                if(i%2==0){
                    if(ans[i][0]%2==0){
                        return false;
                    }
                }
                else{
                    if(ans[i][0]%2!=0){
                        return false;
                    }
                }
            }
            else if(i%2==0){
                if(ans[i][0]%2==0){
                        return false;
                    }
                for(int j=1;j<ans[i].size();j++){
                    if(ans[i][j]%2==0 || ans[i][j-1]>=ans[i][j]){
                        return false;
                    }
                }
            }
            else{
                if(ans[i][0]%2!=0){
                        return false;
                    }
               for(int j=1;j<ans[i].size();j++){
                    if(ans[i][j]%2!=0 || ans[i][j-1]<=ans[i][j]){
                        return false;
                    }
                } 
            }
        }
        return true;
    }
};