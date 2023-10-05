class Solution {
    public char findTheDifference(String s, String t) {
        if(s.isEmpty()) return t.charAt(0);

        int i = 0;
        char[] temp = s.toCharArray();
        Arrays.sort(temp);
        s = String.valueOf(temp);

        temp = t.toCharArray();
        Arrays.sort(temp);
        t = String.valueOf(temp);

        while(i < s.length() && s.charAt(i) == t.charAt(i)){
            i++;
        }
        return t.charAt(i);
    }
}