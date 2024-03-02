class Solution {
public:
    bool check(string &s1,string &s2){
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        if(s1.size()==s2.size()){
            if(s1.size()==1){
                return true;
            }
            else{
                for(int i=0;i<s1.size();i++){
                    mp1[s1[i]]++;
                    mp2[s2[i]]++;
                }
                for(int i=0;i<s1.size();i++){
                     if(mp1[s1[i]]!=mp2[s2[i]] || ((s1[i]==s1[i+1] and s2[i]!=s2[i+1]) || (s2[i]==s2[i+1] and s1[i]!=s1[i+1]))){
                        
                         return false;
                     }
                }
                return true;
            }

        }
        else{
            return false;
        }
        return false;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> temp;
        for(int i=0;i<words.size();i++){
            if(check(words[i],pattern)){
                temp.push_back(words[i]);
            }
        }
        return temp;
    }
};