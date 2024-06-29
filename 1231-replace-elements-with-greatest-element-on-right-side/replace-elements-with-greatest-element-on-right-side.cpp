class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int ans=-1;
        vector<int> temp;
        for(int i=arr.size()-1;i>=0;i--){
                temp.push_back(ans);
                if(arr[i]>ans){
                    ans=arr[i];
                }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};