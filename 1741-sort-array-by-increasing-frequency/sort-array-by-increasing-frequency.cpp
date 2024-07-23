class Solution {
public:
class compare_fun
    {    
        public:
        // Since as you can see we have to sort decreasing order if frequency of two elements
        // is same, so we need *Custom Comparator Function* which is this \U0001f447
        bool operator()(pair<int, int> p1, pair<int, int> p2) 
        {    
            if(p1.first==p2.first)
                return p1.second < p2.second;
            return p1.first > p2.first;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare_fun> pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        int ind=0;

        while(!pq.empty()){
            // int cnt=pq.top().first;
            
                pair<int,int> p = pq.top();
                p.first--;
                 pq.pop();
                 nums[ind]=p.second;
                 ind++;
                 while(p.first>0){
                    nums[ind]=p.second;
                    ind++;
                    p.first--;
                 }
                 
            
            
        }
        return nums;
    }
};