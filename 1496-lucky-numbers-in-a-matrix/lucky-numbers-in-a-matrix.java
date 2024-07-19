class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        for(int i=0; i<matrix.length; i++) {
            int min = Integer.MAX_VALUE;
            int x = 0;
            for(int j=0; j<matrix[0].length; j++) {
                  if(min>matrix[i][j]) {
                    min = matrix[i][j];
                    x = j;
                  }
            }
            boolean flag = true;
            for(int j=0; j<matrix.length; j++) {
                if(matrix[j][x]>min) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                ans.add(min);
            }
        }
        return ans;
    }
}