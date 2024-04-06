class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int maxlen=0;
        while(j<nums.size()){
            if(nums[j]==0){
                k--;
            }
            j++;
            
            cout<<k<<endl;
            if(k<0){
                while(k<0){
                    if(nums[i]==0){
                        k++;
                    }
                    i++;
                }
            }
            maxlen=max(maxlen,(j-i));
            // cout<<i<<" "<<j<<endl;
        }
        return maxlen;
    }
};