class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        int mod=(int)1e9+7;
        vector<int> temp(n,1);
        
        for(int i=0;i<k;i++){
            for(int i=0;i<n;i++){
                if(i==0){
                    continue;
                }
                temp[i]=(temp[i]%mod+temp[i-1]%mod)%mod;
            }
            
        }
        return temp[n-1]%mod;
    }
};