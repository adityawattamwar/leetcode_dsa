class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt=0;
        int nmt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'  || s[i]=='u'){
                cnt++;
            }
            else{
                nmt++;
            }
        }
        if(cnt==0){
            return false;
        }
        if(cnt%2!=0){
            return true;
        }
        return 1;
    }
};