class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int op=0,cl=0;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                op++;
            }
            
            else if(s[i]==')'){
                if(op<=0){
                    s[i]='&';
                }
                else{
                op--;
                }
                
            }
        }
        
        for(int i=s.size()-1;i>=0;i--){
            
            if(s[i]==')'){
                cl++;
            }
            
            else if(s[i]=='('){
                if(cl<=0){
                    s[i]='&';
                }
                else  cl--;
                
            }
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='&'){
                ans.push_back(s[i]);
            }
        }
     
        return ans;
    }
};