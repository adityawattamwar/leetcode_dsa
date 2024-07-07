class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt=0;
        int quant=numBottles;
        cnt+=quant;
        int power=0;
        while(quant!=0){
            if(quant<numExchange) break;

            cnt+=quant/numExchange;
            quant=(quant%numExchange+quant/numExchange);
            
            
        }
        return cnt;
    }
};