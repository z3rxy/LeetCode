class Solution {
    public int search(int[] nums, int target) {
        int start = 0, end = nums.length - 1, mid = nums.length / 2;
        while(start <= end){
            mid = (end + start) / 2;
            if(target > nums[mid]){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else return mid;
        }
        return -1;
    }
}