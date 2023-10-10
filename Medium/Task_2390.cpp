class Solution {
public:
    string removeStars(string s) {
        if (!s.find('*')) return s;
        stack<char> buffer;
        string answer;

        for (char c : s) {
            if (c != '*') buffer.push(c);
            else buffer.pop();
        }

        while (!buffer.empty()) {
            answer += buffer.top();
            buffer.pop();
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};