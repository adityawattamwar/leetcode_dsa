class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
         set<pair<long long,long long>> st;
        unordered_map<int,long long> mp;
        int n = nums.size();
        vector<long long> ans;
        for(int i = 0;i<n;i++){
            if(st.find({mp[nums[i]],nums[i]})!=st.end()){
                auto it = st.find({mp[nums[i]],nums[i]});
                st.erase(it);
                if(mp[nums[i]]+freq[i] > 0) {
                    st.insert({mp[nums[i]]+freq[i],nums[i]});
                }
                 mp[nums[i]] = mp[nums[i]] + freq[i];
            }
            else {
                st.insert({freq[i],nums[i]});
                mp[nums[i]] = freq[i];
            }
            
            
            if(st.empty()) ans.push_back(0);
            else ans.push_back((*(st.rbegin())).first);
        }
        return ans;
    }
};