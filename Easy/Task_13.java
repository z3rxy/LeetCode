class Solution {
    public int romanToInt(String s) {
       int sum = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == 'I'){
                if(i < s.length() - 1 && s.charAt(i + 1) == 'V') {sum+=4; i+=1;}
                else if(i < s.length() - 1 && s.charAt(i + 1) == 'X') {sum+=9; i+=1;}
                else sum+=1;
            }
            else if(s.charAt(i) == 'X'){
                if(i < s.length() - 1 && s.charAt(i + 1) == 'L') {sum+=40; i+=1;}
                else if(i < s.length() - 1 && s.charAt(i + 1) == 'C') {sum+=90; i+=1;}
                else sum+=10;
            }
            else if(s.charAt(i) == 'C'){
                if(i < s.length() - 1 && s.charAt(i + 1) == 'D') {sum+=400; i+=1;}
                else if(i < s.length() - 1 && s.charAt(i + 1) == 'M') {sum+=900; i+=1;}
                else sum+=100;
            }
            else if(s.charAt(i) == 'V') sum+=5;
            else if(s.charAt(i) == 'L') sum+=50;
            else if(s.charAt(i) == 'D') sum+=500;
            else if(s.charAt(i) == 'M') sum+=1000;
        }
        return sum;
    }
}