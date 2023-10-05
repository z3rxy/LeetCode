class Solution {
    public boolean isMonotonic(int[] nums) {
        if (nums.length == 1) return true;

        int index = 0;
        boolean indicator;

        while (index < nums.length - 1 && nums[index] == nums[index + 1]) {
            index++;
        }

        if (index == nums.length - 1) return true;

        indicator = nums[index] < nums[index + 1];

        if (index == 0) index++;

        for (int i = index; i < nums.length; i++) {
            if (indicator) {
                if (nums[i - 1] > nums[i]) return false;
            }
            else {
                if (nums[i - 1] < nums[i]) return false;
            }
        }
        return true;
    }
}