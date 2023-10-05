class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (t.empty() && s.empty()) return true;
        else if (!t.empty() && s.empty()) return true;
        else if (s.length() > t.length()) return false;
        else if (s.length() == t.length() && s != t) return false;

        int index = 0;

        for (int i = 0; i < t.length() && index < s.length(); i++) {
            if (s[index] == t[i]) index++;
        }
        if (index == s.length()) return true;
        else return false;
    }
};