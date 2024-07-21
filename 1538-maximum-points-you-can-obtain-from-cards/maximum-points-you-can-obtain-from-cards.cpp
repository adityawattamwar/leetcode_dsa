class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0,rsum=0;
        for(int i=0;i<k;i++){
            lsum+=arr[i];
        }
        int chk=(k-1);
        int last=arr.size()-1;
        int maxi=0;
        maxi=max(maxi,(lsum+rsum));
        while(chk>=0 and last){
              lsum-=arr[chk];
              rsum+=arr[last];
              chk--;
              last--;
              maxi=max(maxi,(lsum+rsum));

        }
        return maxi;
    }
};