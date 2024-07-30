class Solution {
public:
    int minimumDeletions(string s) {
        vector<int> a(s.size()),b(s.size());
        int cnt=0;
        for(int i=0;i<s.size();i++){
           b[i]=cnt;
           if(s[i]=='b'){
            cnt++;
           }
        }
        cnt=0;
        for(int i=s.size()-1;i>=0;i--){
              a[i]=cnt;
              if(s[i]=='a'){
                cnt++;
              }
        }
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            ans=min(ans,(a[i]+b[i]));
        }
        return ans;
    }
};