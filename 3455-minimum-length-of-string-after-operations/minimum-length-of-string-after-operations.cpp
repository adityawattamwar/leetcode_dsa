class Solution {
public:
    int minimumLength(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt=0;
         for(auto i:mp){
            if(i.second>=3){
                if(i.second==3){
                    cnt+=2;
                }
                else if(i.second%2==0){
                    cnt+=2*((i.second/2)-1);
                }
                else{
                    cnt+=2*(i.second/2);
                   
                }
            }
            
         }
        return s.size()-cnt;;
    }
};