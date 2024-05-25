class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                count++;
            }
        }
        map<int,int> mp;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                mp[cnt]=i;
                cnt++;
            }
        }
        vector<int> ans(queries.size());
        for(int i=0;i<queries.size();i++){
            if(queries[i]>count){
                ans[i]=-1;
            }
            else{
            ans[i]=mp[queries[i]-1];
            }

        }
        return ans;

    }
};