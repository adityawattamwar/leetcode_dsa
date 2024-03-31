class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        long long sum=numBottles;
        int empty=numBottles;
        int f=0;
        while(empty>=numExchange || f>0){
            if(empty<numExchange){
                sum+=f;
                empty+=f;
                f=0;
            }
            else{
            empty-=numExchange;
            f++;
            numExchange++;
            }
        }
        return sum;
    }
};