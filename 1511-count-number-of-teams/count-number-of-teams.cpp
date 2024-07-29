class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int ans = 0;
        vector<int> nextGreater(n,0);
        vector<int> nextSmaller(n,0);
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(rating[j]>rating[i]) nextGreater[i]++;
                if(rating[j]<rating[i]) nextSmaller[i]++;
            }
        }
        for(int i=0;i<n-2;++i){
            for(int j=i+1;j<n-1;++j){
                if(rating[i]<rating[j]){
                    ans+=nextGreater[j];
                }
                if(rating[i]>rating[j]){
                    ans+=nextSmaller[j];
                }
            }
        }
        return ans;
    }
};