class Solution {
public:
    bool notvalid(int k,map<char,int> &mp){
        int maxi=0;
        int cnt=0;
        for(auto i:mp){
            cnt+=i.second;
            maxi=max(maxi,i.second);
        }
        return (cnt-maxi)>k;
    }
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int maxlen=0;
        int i=0,j=0;
        while(j<s.size()){
            mp[s[j]]++;
            while(notvalid(k,mp)){
                mp[s[i]]--;
                i++;
            }
            maxlen=max(maxlen,(j-i+1));
            j++;

        }
        return maxlen;
    }
};