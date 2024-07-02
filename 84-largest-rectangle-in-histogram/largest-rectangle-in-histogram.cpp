class Solution {
    private:
     vector<int> nextsmallerElement(vector<int> arr, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = n-1; i>=0; i--){
            int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()] >=curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

         vector<int> prevsmallerElement(vector<int> arr, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = 0; i< n; i++){
            int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()] >=curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
         int n = heights.size();
        vector<int> next(n);
        next = nextsmallerElement(heights,n);

        vector<int> prev(n);
        prev = prevsmallerElement(heights,n);

        int area = INT_MIN;
        for(int i =0; i <n; i++){
            int l = heights[i];

            if(next[i] == -1){   // agr sra bar equal height pr hoga uss case m next ko rightmost m le jayenge
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area,newArea); 
        }
        return area;
    }
};