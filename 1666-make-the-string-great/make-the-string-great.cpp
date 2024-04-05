class Solution {
public:
    string makeGood(string s) {
        string temp;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(abs((s[i]-'0')-(st.top()-'0'))==32){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;

    }
};