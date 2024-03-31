class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
       int ans=-1;
       int num=x;
       int sum=0;
       while(x!=0){
         sum+=x%10;
         x/=10;
       } 
       cout<<sum<<endl;
       if(num%sum==0){
        return sum;
       }
       return ans;
    }
};