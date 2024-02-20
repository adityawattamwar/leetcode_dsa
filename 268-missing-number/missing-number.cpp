class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=(nums.size()*(nums.size()+1))/2;
        int vhk=0;
        for(int i=0;i<nums.size();i++){
               vhk+=nums[i];
        }
        return sum-vhk;
    }
};