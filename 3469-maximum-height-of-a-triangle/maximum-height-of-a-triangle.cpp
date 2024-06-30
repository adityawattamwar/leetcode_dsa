class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int dr=red,db=blue;
        int case1=0,case2=0;
        // case1 refers to starting with blue
        int cnt=1;
        while(blue>=cnt || red>=cnt){
            if(cnt%2!=0){
                if(blue<cnt){
                    break;
                }
                blue-=cnt;
                cnt++;
            }
            else{
                if(red<cnt){
                    break;
                }
                red-=cnt;
                cnt++;
            }
            case1++;
        }
        blue=db;
        red=dr;
        cnt=1;
        while(blue>=cnt || red>=cnt){
            if(cnt%2==0){
                if(blue<cnt){
                    break;
                }
                blue-=cnt;
                cnt++;
            }
            else{
                if(red<cnt){
                    break;
                    
                }
                red-=cnt;
                cnt++;
            }
            case2++;
        }
        cout<<case1<<case2<<endl;
        return max(case1,case2);
    }
};