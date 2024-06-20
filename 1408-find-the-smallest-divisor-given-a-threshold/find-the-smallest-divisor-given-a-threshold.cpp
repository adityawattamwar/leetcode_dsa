class Solution {
public:
    bool valid(vector<int> nums,int mid,int threshold){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid==0){
                sum+=(nums[i]/mid);
            }
            else{
                sum+=1;
                sum+=(nums[i]/mid);
            }
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1,e=0;
        for(int i=0;i<nums.size();i++){
            e=max(e,nums[i]);
        }
        int mid=0;
        int ans=0;
        while(s<=e){
            mid=(s+e)/2;
            if(valid(nums,mid,threshold)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};