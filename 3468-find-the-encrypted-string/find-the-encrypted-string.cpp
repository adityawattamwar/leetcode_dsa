class Solution {
public:
    string getEncryptedString(string s, int k) {
        int num=s.size();
        string temp=s;
        for(int i=0;i<num;i++){
            temp[i]=s[(i+k)%num];
        }
        return temp;
    }
};