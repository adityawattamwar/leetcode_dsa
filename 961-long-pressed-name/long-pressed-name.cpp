class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name[0]!=typed[0]){
            return false;
        }
        if(name.size()>typed.size()){
            return false;
        }
        int i=0,j=0;
        char prev1=name[0];
        char prev2=typed[0];
        int cnt1=0,cnt2=0;
        while(i<name.size() and j<typed.size()){
            cnt1=0,cnt2=0;
            if(name[i]==typed[j]){
                if(name[i]==prev1 or typed[j]==prev2){
                while(name[i]==prev1 and typed[j]==prev2){
                    i++;
                    j++;
                    cnt1++;
                    cnt2++;
                } 
                while(name[i]==prev1){
                    i++;
                    cnt1++;
                }
                
                while(typed[j]==prev2){
                    j++;
                    cnt2++;
                }
                if(cnt1>cnt2){
                    return false;
                }
                }
                else{
                    i++;
                    j++;
                }
                prev1=name[i];
                prev2=typed[j];
            }
            else{
                return false;
            }
           
           
        }
        if(i!=name.size() || j!=typed.size()){
            return false;
        }
        return true;
    }
};