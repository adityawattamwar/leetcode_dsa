class Solution {
public:
    int minOperations(int k) {
        int initial=1;
        if(initial>=k){
            return 0;
        }
        if(k==2){
            return 1;
        }
        int notprime=0;
        for(int i=2;i<k;i++){
            if(k%i==0){
                notprime=1;
                break;
            }
        }
        if(!notprime){
            k+=1;
        }
        int mini=INT_MAX;
        for(int i=2;i<k;i++){
                if(k%i==0){
                mini=min(mini,((i-1)+(k/i)-1));
                }
            else{
                mini=min(mini,((i-1)+(k/i)));
            }
            
        }
        return mini;
        
    }
};