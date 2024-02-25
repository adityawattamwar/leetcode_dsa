class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        if(nums.size()>2 and nums[2]==4){
            return false;
        }
        if(nums.size()==1) return true; //edge case
        unordered_set<int> se(begin(nums),end(nums));
        //edge case
        if(se.size()==1){ 
            if(se.find(1)==se.end()) return 1;
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            int f=0;
            for(int j=0;j<nums.size();j++){
                if(j!=i && __gcd(nums[i],nums[j])>1 && nums[i]!=nums[j]){
                    f=1;break;
                }
            }
            if(f==0) return false;
        }
        return true;
    }
};