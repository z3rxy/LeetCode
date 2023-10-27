class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size(), start = 0, maxLen = 0, left, right;
        for (int i = 0; i < n;) {
            left = i;
            right = i;

            while (right < n - 1 && s[right] == s[right + 1]) {
                ++right;
            }

            i = right + 1;

            while (left > 0 && right < n - 1 && s[left - 1] == s[right + 1]) {
                ++right;
                --left;
            }

            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
        }
        return s.substr(start, maxLen);
    }
};