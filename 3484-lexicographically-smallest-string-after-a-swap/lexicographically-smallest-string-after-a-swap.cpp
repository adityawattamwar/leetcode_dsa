class Solution {
public:
    string getSmallestString(string s) {
        // if(s.size()==2){
        //     if((s[0]-'0')%2==0 and (s[1]-'0')%2==0  ||  (s[i]-'0')%2!=0 and (s[i]-'0')%2!=0){
        //         if(s[0]-'0'>s[1]-'0'){
        //             swap(s[0],s[1]);
                    
        //         }
        //         return s;
        //     }
        //     else{
        //         return s;
        //     } 
        // }
        for(int i=0;i<s.size()-1;i++){
             if((s[i]-'0')%2==0 and (s[i+1]-'0')%2==0  ||  (s[i]-'0')%2!=0 and (s[i+1]-'0')%2!=0){
                if(s[i]-'0'>s[i+1]-'0'){
                   swap(s[i],s[i+1]);
                   break;
                }
             } 
        }
        return s;
    }
};