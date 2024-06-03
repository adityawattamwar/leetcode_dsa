class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string answer;

        // odd substring

        for(int i=0;i<n;i++){
            string temp;
            int l = i-1;
            int r = i+1;

            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
            }
            temp = s.substr(l+1, r-l-1);
            if(answer.size()<temp.size())answer = temp;
        }    

        // even substring

        for(int i=0;i<n;i++){
            string temp;
            int l = i;
            int r = i+1;

            while(l>=0 && r<n && s[l] == s[r]){
                l--;
                r++;
            }
            temp = s.substr(l+1, r-l-1);
            if(answer.size()<temp.size())answer = temp;
        }

        return answer;
    }
};