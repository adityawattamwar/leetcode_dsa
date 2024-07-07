class Solution {
public:
    void generate(vector<string> &ans,string &temp,int n,int idx,int last){
        if(idx==n){
           ans.push_back(temp);
           return;
        }
        
        
        generate(ans,temp+='1',n,idx+1,1);
        temp.pop_back();

        if(last!=0){
            
            generate(ans,temp+='0',n,idx+1,0);
            temp.pop_back();
        }
        

    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string temp;
        int idx=0;
        int last=-1;
        generate(ans,temp,n,idx,last);
        return ans;
    }
};