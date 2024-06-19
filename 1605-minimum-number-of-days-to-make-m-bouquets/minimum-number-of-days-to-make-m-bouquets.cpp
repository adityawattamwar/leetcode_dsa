class Solution {
public:
    int minDays(vector<int>& ar, int m, int k) 
    {
        int n = ar.size();
        int ans = -1;
        int low = *min_element(ar.begin(),ar.end());
        int high = *max_element(ar.begin(),ar.end());
        while(low<=high)
        {
            int mid = (low+high)/2;
            int count = 0;
            int res = 0;
            for(int i=0;i<ar.size();i++)
            {
                if(ar[i]<=mid)
                {
                    count++;
                }
                else
                {
                    res += count/k;
                    count =0;
                }
            }
            res += count/k;
            if(res<m)
            {
                low = mid+1;
            }
            else
            {
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};