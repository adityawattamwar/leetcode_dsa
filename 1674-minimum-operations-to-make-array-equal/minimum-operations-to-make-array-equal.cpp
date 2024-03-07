class Solution {
public:
    int minOperations(int n) {
        int sum=0;
        for(int i=0;i<n;i++){
            if(((2*i)+1)%2!=0){
                sum+=((2*i)+1);
            }
        }
        int cnt=(sum)/n;
        int ind=1;
        int ans=0;
        while(ind<=n){
           if(ind<=cnt and ind%2!=0){
                 ans+=(cnt-ind);
           }
           if(ind>cnt){
               break;
           }
           ind++;
        }
        return ans;
    }
};