class Solution {
public:
	bool isPowerOfFour(int n) {
		if (n == 1) return true;
		if (n % 2 != 0 || n <= 0) return false;

		int counter = 0;

		while (n > 1) {
			if (n % 2 != 0) return false;
			n = n >> 1;
			counter++;
		}

		return counter % 2 == 0 ? true : false;
	}
};