class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]==0 and k>=0){
                k--;
                
            }
            while(k<0){
                
                if(nums[i]==0){
                    k++;
                    
                }
                i++;
                
            }
            maxlen=max(maxlen,(j-i+1));
            j++;
        }
        return maxlen;
    }
};