class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;
        }
        sort(hand.begin(),hand.end());
        map<int,int> mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        vector<int> temp;
        
        int cnt=groupSize;
        cnt--;
        temp.push_back(hand[0]);
        mp[hand[0]]--;
        for(int i=1;i<hand.size();i++){
           if(cnt==0){
               cnt=groupSize;
               temp.clear();
               cnt--;
               for(auto it:mp){
                if(it.second>0){
                      temp.push_back(it.first);
                      
                      mp[it.first]--;
                      break;
                }
               }
               
           }
           else if(mp[temp.back()+1]==0){
            // cout<<i<<endl;
            return false;
           }
           else{
               mp[temp.back()+1]--;
               temp.push_back(temp.back()+1);
               cnt--;
               
           }
        }
        return true;

    }
};