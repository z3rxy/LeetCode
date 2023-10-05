class Solution {
    public boolean canCross(int[] stones) {
        int n = stones.length;
        for (int i = 1; i < n; i++) {
            if (stones[i] - stones[i - 1] > i + 1) return false;
        }
        int[] dp = new int[n];
        return solver(stones, dp, 0, 1);
    }

    boolean solver(int[] stones, int[] dp, int k, int unit) {
        if (k == stones.length - 1) {
            return true;
        }
        else {
            for (int i = k + 1; i < stones.length; i++) {
                int diff = stones[i] - stones[k];
                if (diff > i + 1 || diff > unit + 1) return false;
                if (k > 0 && unit + 1 == diff && diff > dp[i]) {
                    if (solver(stones, dp, i, unit + 1)) return true;
                    else dp[k] = unit + 1;
                }
                else if (unit == diff && diff > dp[i]) {
                    if (solver(stones, dp, i, unit)) return true;
                    else dp[k] = unit;
                }
                else if (k > 0 && unit - 1 == diff && diff > dp[i]) {
                    if (solver(stones, dp, i, unit - 1)) return true;
                    else dp[k] = unit - 1;
                }
            }
        }
        return false;
    }
}