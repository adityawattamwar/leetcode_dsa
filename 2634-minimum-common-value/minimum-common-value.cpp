class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int s=0,e=0;
        int mini=min(nums1.size(),nums2.size());
        while(s<nums1.size() and e<nums2.size()){
            if(nums1[s]<nums2[e]){
                s++;
            }
            else if(nums1[s]==nums2[e]){
                return nums1[s];
            }
            else{
                e++;
            }
        }
        return -1;
    }
};