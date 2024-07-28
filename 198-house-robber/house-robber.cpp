class Solution {
public:
    int find(vector<int>&dp,vector<int>&nums,int ind){
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick= nums[ind]+find(dp,nums,ind-2);
        int notpick=find(dp,nums,ind-1);
        return dp[ind]=max(pick,notpick);

    }
    int rob(vector<int>& nums) {
        int ind=nums.size()-1;
        vector<int> dp(nums.size()+1,-1);
        return find(dp,nums,ind);
        

    }
};