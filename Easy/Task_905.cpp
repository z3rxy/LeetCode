class Solution {
    public int[] sortArrayByParity(int[] nums) {
        if (nums.length == 1) return nums;

        int indexOdd = 0, indexAnswer = 0;
        int[] odd = new int[nums.length];
        int[] answer = new int[nums.length];

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 2 == 0) {
                answer[indexAnswer] = nums[i];
                indexAnswer++;
            }
            else {
                odd[indexOdd] = nums[i];
                indexOdd++;
            }
        }

        for (int i = 0; i < indexOdd; i++) {
            answer[indexAnswer + i] = odd[i];
        }

        return answer;
    }
}