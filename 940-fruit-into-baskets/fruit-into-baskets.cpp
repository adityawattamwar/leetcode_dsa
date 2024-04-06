class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int cnt=0;
        map<int,int> mp;
        int i=0,j=0;
        int maxlen=0;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            j++;
            if(mp.size()>2){
                mp[fruits[i]]--;
                cout<<mp[fruits[i]]<<endl;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                    // cout<<mp
                }
                i++;
            }
            if(mp.size()<=2){
                maxlen=max(maxlen,(j-i));
            }
        }
        return maxlen;
    }
};