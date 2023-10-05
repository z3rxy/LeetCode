class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        String answer = "";

        for(int i = words.length - 1; i > -1; i--){
            answer += words[i];
            if(i != 0) answer += " ";
        }

        return answer;
    }
}