class Solution {
    public int maximumWealth(int[][] accounts) {
      int sum = 0, newSum = 0;
        for(int i = 0; i < accounts.length; i++){
            for(int j = 0; j < accounts[i].length; j++){
                newSum += accounts[i][j];
            }
            if(newSum > sum){
                sum = newSum;
            }
            newSum = 0;
        }
        return sum;
    }
}