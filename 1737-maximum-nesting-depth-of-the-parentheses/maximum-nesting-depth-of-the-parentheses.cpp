class Solution {
public:
    int maxDepth(string s) {
       int l=0,r=0;
       int maxi=0;
       for(int i=0;i<s.size();i++){
         if(s[i]=='('){
            l++;
         }
         if(s[i]==')'){
            l--;
         }
         maxi=max(maxi,l);
       } 
       return maxi;
    }
};