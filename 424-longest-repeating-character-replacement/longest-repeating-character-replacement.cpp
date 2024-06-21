class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq=0,ans=0,remain=0,j=0;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'A']++;
            maxfreq=max(maxfreq,freq[s[i]-'A']);
            
            
            while(i-j+1-maxfreq>k && j<i){
                freq[s[j]-'A']--;
                maxfreq=0;
                for(auto x:freq) maxfreq=max(maxfreq,x);
                j++;
                
            }
           if(i-j+1-maxfreq<=k) ans=max(ans,i-j+1);
        }

        return ans;
    }
};