class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==n){
            return m;
        }
       long long cnt=0;
       while(m!=n){
            m>>=1;
            n>>=1;
            cnt++;
       }
       return m<<cnt;
    }
};