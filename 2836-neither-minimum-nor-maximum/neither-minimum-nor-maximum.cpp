class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int ans=-1;
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
             maxi=max(maxi,nums[i]);
             mini=min(mini,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=maxi and nums[i]!=mini){
                return nums[i];
            }
        }
        return ans;
    }
};