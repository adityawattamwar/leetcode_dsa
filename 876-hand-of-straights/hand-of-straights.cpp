class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;

        }
        int act=hand.size()/groupSize;
        unordered_map<int,int> mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        int grp=0,cnt=0;
        int mini=INT_MAX;
        int val=0;
        while(grp<act){
            cnt=0;
            val=INT_MAX;
            mini=INT_MAX;
            for(auto i:mp){
                if(i.second>0){
                val=min(val,i.first);
                }
            }
            cnt++;

            mp[val]--;
            while(cnt<groupSize){
               val++;
               if(mp[val]>0){
                 mp[val]--;
                
                 cnt++;
               }
               else{
                return false;
               }

            }
            if(cnt==groupSize){
                grp++;
            }

        }
        return true;

    }
};