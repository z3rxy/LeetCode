class Solution {
    public boolean isValid(String s) {
      if(s.length() % 2 != 0) return false;
        char c;
        Stack<Character> z = new Stack<>();
        for(int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{') z.push(s.charAt(i));
            else if (s.charAt(i) == ')' && !z.isEmpty() && z.peek() == '(') {
                z.pop();
            } else if (s.charAt(i) == '}' && !z.isEmpty() && z.peek() == '{') {
                z.pop();
            } else if (s.charAt(i) == ']' && !z.isEmpty() && z.peek() == '[') {
                z.pop();
            }
            else return false;
        }
       return z.empty();
    }
}