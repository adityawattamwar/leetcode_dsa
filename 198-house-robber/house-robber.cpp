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
        vector<int> dp(nums.size()+1,-1);
        dp[0]=nums[0];
        
        for(int i=0;i<nums.size();i++){
            int pick=nums[i],notpick=0;
            if(i>1){
                pick+=dp[i-2];
            }
            if(i>0){
                 notpick=dp[i-1];
            }
            
            dp[i]=max(pick,notpick);
        }
        return dp[nums.size()-1];
        
        

    }
};