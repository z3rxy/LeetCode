class Solution {
public:
	string reverseWords(string s) {
		string answer = "", temp;
		int counter = 0, i = 0;

		for (i = 0; i < s.length(); i++) {
			if (s[i] != ' ') counter++;
			else {
				temp = s.substr(i - counter, counter);
				counter = 0;
				reverse(temp.begin(), temp.end());
				answer += temp + " ";
			}
		}

		temp = s.substr(i - counter, counter);
		reverse(temp.begin(), temp.end());
		answer += temp;

		return answer;
	}
};