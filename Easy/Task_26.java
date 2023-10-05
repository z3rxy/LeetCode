class Solution {
    public int removeDuplicates(int[] nums) {
        int counter = 1, index = 0, indexAns = 1;
        for(int i = 1; i < nums.length; i++){
            if(nums[index] != nums[i]){
                index = i;
                nums[indexAns] = nums[index];
                indexAns++;
                counter++;
            }
        }
        return counter;
    }
}