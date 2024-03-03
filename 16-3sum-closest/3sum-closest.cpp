class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int final=0;
        for(int i=0;i<nums.size();i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum==target){
                    return sum;
                }
                if (abs(target-sum)<=mini) {
                    mini=abs(target-sum);
                    final=sum;
                   
                   
                }
                if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return final;
    }
};