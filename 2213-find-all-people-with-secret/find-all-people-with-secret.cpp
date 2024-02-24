class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meet, int fp) {
        set<int>s;
        for(int i=0;i<meet.size();i++)
        {
            reverse(meet[i].begin(),meet[i].end());
        };
        sort(meet.begin(),meet.end());
        s.insert(0);
        s.insert(fp);
        for(int i=0;i<meet.size();i++)
        {   
            int j=i;
            if(s.count(meet[i][1])!=0||s.count(meet[i][2])!=0)
            {s.insert(meet[i][1]);s.insert(meet[i][2]);}
            while(j+1<meet.size()&&meet[j][0]==meet[j+1][0])
            {
                if(s.count(meet[j][1])!=0||s.count(meet[j][2])!=0)
                {s.insert(meet[j][1]);s.insert(meet[j][2]);}
                j++;
            }
            for(int k=j;k>=i;k--)
            {
                if(s.count(meet[k][1])!=0||s.count(meet[k][2])!=0)
                {s.insert(meet[k][1]);s.insert(meet[k][2]);}
            };
            i=j;
        };
        vector<int>ans;
        for(auto it:s)
        ans.push_back(it);
        return ans;
    }
};