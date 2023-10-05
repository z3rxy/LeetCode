class Solution {
public:
    bool closeStrings(string word1, string word2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if (word1.length() != word2.length()) return false;

        set<char> charSet1, charSet2;
        vector<int> count1(26, 0), count2(26, 0);

        for (int i = 0; i < word1.length(); i++) {
            charSet1.insert(word1[i]);
            charSet2.insert(word2[i]);

            count1[word1[i] - 'a']++;
            count2[word2[i] - 'a']++;
        }

        if (charSet1 != charSet2) return false;

        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());

        return count1 == count2;
    }
};