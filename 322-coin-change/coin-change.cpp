class Solution {
public:
long long int dp[10010];
long long int solve(long long int amount,vector<int>&v)
{
    if(amount==0)
    return 0;
    if(dp[amount]!=-1)
    return dp[amount];

    long long int ans=INT_MAX;
    for(auto&i:v)
    {
        if(amount-i>=0)
        ans=min(ans,solve(amount-i,v)+1);
    }
    return dp[amount]=ans;
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        memset(dp,-1,sizeof(dp));
       if( solve(amount,coins)>=INT_MAX)
       return -1;
       return solve(amount,coins);
    }
};