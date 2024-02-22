class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.empty()){
            if(n>1){
                return -1;
            }
            else{
                return n;
            }
        }
        map<int,int> mp;
        int cnt=0;
        vector<int> temp(n+1,-1);
        for(int i=0;i<trust.size();i++){
            temp[trust[i][0]]=trust[i][1];
            mp[trust[i][1]]++;
        }
        for(int i=0;i<trust.size();i++){
            if(temp[trust[i][1]]==-1 and mp[trust[i][1]]==(n-1)){
                return trust[i][1];
            }
        }
        return -1;

    }
};