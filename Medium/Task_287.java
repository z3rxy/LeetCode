class Solution {
      public int findDuplicate(int[] nums) {
        HashSet<Integer> set = new HashSet<>(nums.length);
        for(int i = 0; i < nums.length; i++){
            if(!set.add(nums[i])) return nums[i];
        }
        return 1;
    }
}