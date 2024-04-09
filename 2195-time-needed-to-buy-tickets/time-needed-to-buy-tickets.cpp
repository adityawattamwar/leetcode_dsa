class Solution {
public:
    int timeRequiredToBuy(vector<int>& a, int k) {
        int cnt=0;
        while(true){
            for(int i=0;i<a.size();i++){
                if(a[i]==0){
                    continue;
                }
                a[i]--;
                
                cnt++;
                if(a[k]==0){
                    return cnt;
                }
            }
        }
    }
};