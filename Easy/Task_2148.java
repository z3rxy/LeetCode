class Solution {
    public int countElements(int[] nums) {
        int n = nums.length;
        int maxEl = nums[0];
        int minEl = nums[0];

        for(int i = 1; i < nums.length; i++){
            if(maxEl < nums[i]){
                maxEl = nums[i];
            }
            else if(minEl > nums[i]){
                minEl = nums[i];
            }
        }

        if(maxEl == minEl) return 0;

        int maxElCount = 0;
        int minElCount = 0;

        for(int i = 0; i < nums.length; i++){
            if(nums[i] == maxEl){
                maxElCount++;
            }
            else if(nums[i] == minEl){
                minElCount++;
            }
        }

        return n - maxElCount - minElCount;        

    }
}