class Solution {
public:
    string removeKdigits(string num, int k) {
       string ans="";
       for(int i=0;i<num.size();i++){
        
         while(!ans.empty() and ans.back()>num[i] and k>0){
            ans.pop_back();
            k--;
         }
         if( ans.size() || num[i]!='0'){
         ans.push_back(num[i]);
         }

       }
       while( !ans.empty() and k){
        ans.pop_back();
        k--;
       }
    //    while(ans.front()=='0') ans.pop_front();
       return (ans=="")?"0":ans;
    }
    
};