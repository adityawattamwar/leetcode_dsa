class Solution {
public:

    int solve(vector<int>& nums, int k){
        if(k<0){
            return 0;
        }
        int l=0;
        int r =0;
        int cntOdd = 0;
        int ans =0;

        while(r<nums.size()){
            if(nums[r]%2 == 1){
                cntOdd++;
            }
            while(cntOdd > k){
                if(nums[l]%2 == 1){
                    cntOdd--;
                }
                l++;
            }
            ans += r-l+1;
            r++;
        }

        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {

        return solve(nums,k)-solve(nums,k-1);
    }
};