class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int mini=1;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.first<mini){
                continue;
            }
            else if(it.first==mini){
                mini++;
            }
            else{
                return mini;
            }
        }
        return mini;
    }
};