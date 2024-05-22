class Solution {
public:
    vector<int> dailyTemperatures(vector<int> &arr) {
        stack<int> s;  // Stack to store indices
        vector<int> ans(arr.size(), 0);  // Initialize the answer array with 0s
        
        for(int i = arr.size() - 1; i >= 0; i--) {
            int curr = arr[i];
            
            // Pop elements from the stack as long as they are less than or equal to the current temperature
            while(!s.empty() && arr[s.top()] <= curr) {
                s.pop();
            }
            
            // If stack is not empty, the top element is the index of the next warmer day
            if (!s.empty()) {
                ans[i] = s.top() - i;
            }
            
            // Push the current index onto the stack
            s.push(i);
        }
        
        return ans;
    }
};
