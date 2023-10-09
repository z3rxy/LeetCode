int binarySearch(vector<int>& nums, int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return left;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        int firstPos = binarySearch(nums, left, right, target);
        int lastPos = binarySearch(nums, left, right, target + 1) - 1;

        if (firstPos < nums.size() && nums[firstPos] == target) {
            return { firstPos, lastPos };
        }

        return { -1, -1 };
    }
};
