class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum=customers[0][1];
        double prev=customers[0][0]+customers[0][1];
        for(int i=1;i<customers.size();i++){
            if(customers[i][0]>prev){
                sum+=customers[i][1];
                prev=customers[i][0]+customers[i][1];
                continue;
            }
            sum+=(prev+customers[i][1]-customers[i][0]);
            prev+=customers[i][1];
        }
        return sum/customers.size();
    }
};