class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        if(a.size() < 2){
                return a.size();
            }
            vector<int> v;
            v.push_back(a[0]);
            for(int i=1;i<a.size();i++){
                int flag=0;
                for(int j=0;j<v.size();j++){
                    if(a[i]<=v[j]){
                        v[j] = a[i];
                        flag =1;
                        break;
                    }
                }
                if(flag==1){

                }
                else{
                    v.push_back(a[i]);
                }

            }
            // for(int i=0;i<v.size();i++){
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl;
            return v.size();
    }
};