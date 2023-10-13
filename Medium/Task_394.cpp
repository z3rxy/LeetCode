class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;
        string answer;
        int mul = 0;

        for (char curr : s) {
            if (isdigit(curr)) {
                mul = mul * 10 + (curr - '0');
            }
            else if (isalpha(curr)) {
                answer += curr;
            }
            else if (curr == '[') {
                nums.push(mul);
                strs.push(answer);

                mul = 0;
                answer.clear();
            }
            else if (curr == ']') {
                string temp = answer;

                int repeat = nums.top();
                nums.pop();

                for (int i = 1; i < repeat; i++) {
                    answer += temp;
                }

                answer = strs.top() + answer;
                strs.pop();
            }
        }

        return answer;
    }
};