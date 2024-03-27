class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        int prod=1;
        int cnt=0;
        if(k<=1){
            return 0;
        }
        while(j<nums.size()){
             prod*=nums[j];
             while(prod>=k){
            prod/=nums[i++];
            }
                cnt+=1+(j-i);
                j++;
          }
        
             return cnt;
    }
};