class Solution {
    public List<String> fizzBuzz(int n) {
       List<String> answer;
        answer = new ArrayList<>(n);
        for(int i = 0; i < n; i++){
            if((i + 1) % 15 == 0){
                answer.add(i, "FizzBuzz");
            }
            else if((i + 1) % 3 == 0){
                answer.add(i, "Fizz");
            }
            else if((i + 1) % 5 == 0){
                answer.add(i, "Buzz");
            }
            else {
                answer.add(i, String.valueOf(i + 1));
            }
        }
        return answer; 
    }
}