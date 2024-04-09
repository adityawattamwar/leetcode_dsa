class Solution {
public:
    int timeRequiredToBuy(vector<int>& a, int k) {
        int cnt=0;
        int mini=a[k];
        for(int i=0;i<a.size();i++){
           cnt+=min(mini,a[i]);
        }
        int extra=0;
        for(int i=0;i<a.size();i++){
            if(i>k and a[i]>=mini){
                extra++;
            }
            
        }
        return cnt-extra;
    }
};