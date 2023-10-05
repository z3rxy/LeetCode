class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int hottest = 0;
        int[] ans = new int[temperatures.length];
        for (int day = temperatures.length-1; day >= 0; day--) {
            if (hottest <= temperatures[day]) {
                hottest = temperatures[day];
                continue;
            }

            int diff = 1;
            while (temperatures[day + diff] <= temperatures[day]) {
                diff += ans[day+diff];
            }
            ans[day] = diff;
        }
        return ans;
    }
}