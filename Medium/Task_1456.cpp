bool isAVovel(char x) {
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') return true;
    return false;
}

class Solution {

public:

    int maxVowels(string s, int k) {
        if (s.length() == 1 && !isAVovel(s[0])) return 0;
        else if (s.length() == 1 && !isAVovel(s[0])) return 1;

        int answer = 0, left = 0, right = k, count = 0;

        for (int i = 0; i < k; i++) {
            if (isAVovel(s[i])) count++;
        }

        answer = count;

        while (right < s.length()) {
            if (isAVovel(s[right])) count++;
            if (isAVovel(s[left])) count--;
            answer = answer > count ? answer : count;
            right++;
            left++;
        }

        return answer;
    }
};