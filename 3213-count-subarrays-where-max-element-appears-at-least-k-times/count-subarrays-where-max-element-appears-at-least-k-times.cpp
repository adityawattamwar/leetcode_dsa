class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=0;
        long long cnt=0;
        long long kcnt=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]==maxi){
                kcnt++;
            }
            
            while(kcnt>=k){
               
               if(nums[i]==maxi){
                kcnt--;
               }
               i++;
               
               
            }
            cnt+=i;
            j++;
        }
        return cnt;

    }
};