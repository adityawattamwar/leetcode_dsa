class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        priority_queue<int> pq;
        
        for (char task : tasks) {
            mp[task]++;
        }
        
        for (auto it : mp) {
            pq.push(it.second);
        }
        
        int time = 0;
        queue<pair<int, int>> q;
        
        while (!pq.empty() || !q.empty()) {
            if (!pq.empty()) {
                int count = pq.top();
                pq.pop();
                count--;
                
                if (count > 0) {
                    q.push({count, time + n});
                }
            }
            
            if (!q.empty() && q.front().second == time) {
                pq.push(q.front().first);
                q.pop();
            }
            
            time++;
        }
        
        return time;
    }
};
