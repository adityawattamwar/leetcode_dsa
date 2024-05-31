class Solution {
    public int[] singleNumber(int[] nums) {
        int ans[] = new int[2];
        int xor = 0;
        for(int i=0; i<nums.length; i++) {
            xor = xor^nums[i];
        }
        //find the rightmost set bit number of xor
        int setBitNo = xor&((~xor)+1);
        //the set bit means that the two numbers x and y are having different bit at this positon.
        //Therefore now we will assume that x is having 1 and y is having 0 bit atthat position. Therefore we will store xor of all elements having 1 bit at that position in x and same for 0 bit in y.
        //At last as x and y are only 1 time they will be only left out in x and y.
        int x=0;
        int y=0;
        for(int i: nums) {
          if((i&setBitNo)==0) {
              y = y^i;
          } else {
              x = x^i;
          }
        }
        ans[0] = x;
        ans[1] = y;
        return ans;
    }
}