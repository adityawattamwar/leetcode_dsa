class Solution {
public:
    void make(vector<int>&candidates,int ind,vector<int>&temp,int target,vector<vector<int>>&ans){
        if(ind==candidates.size()){
            if(target==0){
            ans.push_back(temp);
            
            }
            return;
        }
        if(candidates[ind]<=target){
            temp.push_back(candidates[ind]);
            make(candidates,ind,temp,target-candidates[ind],ans);
            temp.pop_back();
        }
        make(candidates,ind+1,temp,target,ans);
        return;

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int ind=0;
        make(candidates,ind,temp,target,ans);
        return ans;
    }
};