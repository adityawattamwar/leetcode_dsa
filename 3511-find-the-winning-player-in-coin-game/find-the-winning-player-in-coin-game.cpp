class Solution {
public:
    string losingPlayer(int x, int y) {
        if(y<4){
            return "Bob";
        }
        int mini=min(x,(y/4));
        if(mini%2==0){
            return "Bob";
        }
        else{
            return "Alice";
        }
    }
};