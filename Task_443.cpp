class Solution {
    public int compress(char[] chars) {
        if (chars.length == 1) {
            return chars.length;
        }
        int ans = 0;
        int i = 0;
        while (i < chars.length) {
            int count = 0;
            char curr = chars[i];

            while (i < chars.length && curr == chars[i]) {
                count++;
                i++;
            }

            chars[ans] = curr;
            ans++;

            if (count > 1) {
                for (char ch : Integer.toString(count).toCharArray()) {
                    chars[ans] = ch;
                    ans++;
                }
            }
        }
        return ans;
    }
}