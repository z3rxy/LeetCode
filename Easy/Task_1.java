 class Solution {
    public int[] twoSum(int[] nums, int target) {
        int first = 0;
        int second = 1;
        int window = 1;
        while(true) {
            if(nums[first] + nums[second] == target) {
                break;
            } else if (second == nums.length - 1) {
                window++;
                first = 0;
                second = window;
            } else {
                first++;
                second++;
            }
        }
        return new int[]{first, second};
    }
}