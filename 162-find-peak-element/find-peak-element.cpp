class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[nums.size()-1]>nums[nums.size()-2]){
            return nums.size()-1;
        }
         int s=0,e=(nums.size()-1),mid;
        while(s<=e){
            mid=(s+e)/2;
            if(nums[mid]<nums[mid+1]){
                s=(mid+1);
            }
            else if(nums[mid-1]<nums[mid] && nums[mid+1]<nums[mid]){
                     return mid;
            }
            else{
                e=(mid-1);
            }
        }
        return mid;
    }

    
};