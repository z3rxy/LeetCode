class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged_string;
        int n = word1.length();
        int m = word2.length();
        for (int i = 0; i < min(n, m); i++) {
            merged_string += word1[i];
            merged_string += word2[i];
        }
        if (n > m) {
            for (int i = m; i < n; i++) {
                merged_string += word1[i];
            }
        }
        else {
            for (int i = n; i < m; i++) {
                merged_string += word2[i];
            }
        }

        return merged_string;
    }
};