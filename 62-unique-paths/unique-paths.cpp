class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        dp[0][0]=1;
        if(m==1 and n==1) return 1;
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(i>0 and j>0){
                dp[i][j] = dp[i-1][j] + dp[i][j-1]; 
                } 
            } 
        }
        return dp[m-1][n-1]*-1; 
    }
};