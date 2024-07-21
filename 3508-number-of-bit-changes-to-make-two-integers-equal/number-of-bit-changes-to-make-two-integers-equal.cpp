class Solution {
public:
    int minChanges(int n, int k) {
        string f,l;
        while(n!=0){
            f+=to_string(n%2);
            n/=2;
        }
        while(k!=0){
            l+=to_string(k%2);
            k/=2;
        }
        if(f.size()<l.size()){
            while(f.size()<l.size()){
                f+='0';
            }
        }
        else{
            while(l.size()<f.size()){
                l+='0';
            }
        }
        int cnt=0;
        if(f.size()!=l.size()){
            return -1;
        }
        for(int i=0;i<l.size();i++){
            if(f[i]=='1' and l[i]=='0'){
                cnt++;
            }
            else if(f[i]=='0' and l[i]=='1'){
                return -1;
            }
        }
        return cnt;

    }
};