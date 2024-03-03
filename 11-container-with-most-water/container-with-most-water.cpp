class Solution {
public:
    int maxArea(vector<int>& height) {
            int l=0,r=height.size()-1;
            int ans=0,temp=0;
            while(l<r){
                temp= (min(height[l],height[r])*(r-l));
                ans=max(ans,temp);
                if(height[l]>height[r]){
                    r--;
                }
                else{
                    l++;
                }
            }
            return ans;
    }
};