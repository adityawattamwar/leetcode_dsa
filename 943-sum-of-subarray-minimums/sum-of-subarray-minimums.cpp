class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int mod = 1e9+7;
        vector<int64_t> smaller_right(arr.size(), arr.size());
        // mono increasing stack.
        stack<int64_t> st;
        for(int i = arr.size() - 1; i >= 0; --i){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if(!st.empty()) smaller_right[i] = st.top();
            st.push(i);
        }
        st = {};
        int res = 0;
        for(int i = 0; i < arr.size(); ++i){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();
            int left = st.empty() ? -1 : st.top();
            res = (res + (arr[i] * (i - left) * (smaller_right[i] - i)) % mod) % mod;
            st.push(i);
        }
        return res;

    }
};