class Solution {
    public String longestCommonPrefix(String[] strs) {
      int size = strs[0].length();
        for (int i = 0; i < strs.length; i++) {
            if (strs[i].length() < size)
                size = strs[i].length();
        }

        StringBuilder str = new StringBuilder();
        for (int i = 0; i < size; i++) {
            int flag = 0;
            char ch = strs[0].charAt(i);
            for (int j = 0; j < strs.length; j++) {


                if (strs[j].charAt(i) != ch) {
                    flag = -1;
                    break;
                }
            }
            if (flag != -1) {
                str.append(ch);
            } else
                return str.toString();

        }
        return str.toString();   
    }
}