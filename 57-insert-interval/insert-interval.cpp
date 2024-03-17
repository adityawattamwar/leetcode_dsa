class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i = 0;
        vector<vector<int>> ans;

        // case 1 : non overlapping case before the merge intervals
        // Compare ending point of intervals to starting point of newInterval
        while(i < n && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }

        // case 2: overlapping case and merging the intervals
        while(i < n && newInterval[1] >= intervals[i][0]){
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        ans.push_back(newInterval);

        // case 3: no overlapping of intervals after newinterval begin merges
        while(i < n){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};