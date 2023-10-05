class Solution {
    public String reverseVowels(String s) {
        int i = 0, j = s.length() - 1;
        char[] answer = new char[s.length()];
        char temp;
        answer = s.toCharArray();

        for(i = 0; i < j; i++){
            if(isAVowel(answer[i])){
                while(!isAVowel(answer[j]) && j > i) {
                    j--;
                }
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
                j--;
            }
        }
        return String.valueOf(answer);
    }
    public static boolean isAVowel(char x){
        x = Character.toLowerCase(x);
        char[] vowels = {'a', 'e', 'u', 'o', 'i'};
        for(char y : vowels) {
            if(y == x) return true;
        }
        return false;
    }
}