class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> st;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int mini=min(nums1.size(),nums2.size());
        int i=0,j=0;
        while(j<nums2.size() and i<nums1.size()){
            if(nums1[i]<nums2[j]){
                 i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
               st.insert(nums1[i]);
                i++;
                j++;
            }
        }
        vector<int> temp(st.begin(),st.end());
        return temp;
    }
};