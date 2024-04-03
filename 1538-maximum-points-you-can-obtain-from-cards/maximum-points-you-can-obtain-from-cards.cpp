class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0,rsum=0;
        for(int i=0;i<k;i++){
            lsum+=arr[i];
        }
        int maxi=lsum;
        int end=arr.size()-1;
        int chk=(k-1);
        while(chk>=0){
            
            lsum-=arr[chk];
            rsum+=arr[end];
             chk--;
            end--;
           
             maxi=max(maxi,(lsum+rsum));
         }
        return maxi;
    }
};