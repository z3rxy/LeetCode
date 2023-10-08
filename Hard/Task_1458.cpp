class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> matrix(nums1.size() + 1, vector<int>(nums2.size() + 1, INT_MIN));

        for (int i = 1; i < nums1.size() + 1; i++) {
            for (int j = 1; j < nums2.size() + 1; j++) {
                int temp = nums1[i - 1] * nums2[j - 1];
                matrix[i][j] = max(nums1[i - 1] * nums2[j - 1] + max(matrix[i - 1][j - 1], 0), max(matrix[i - 1][j], matrix[i][j - 1]));
            }
        }
        return matrix[nums1.size()][nums2.size()];
    }
};
