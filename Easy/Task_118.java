class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> answer = new ArrayList<>(numRows);
       
        for(int i = 0; i < numRows; i++){
            answer.add(i, new ArrayList<>(i + 1));
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i) answer.get(i).add(1);
                else answer.get(i).add(answer.get(i - 1).get(j) + answer.get(i - 1).get(j - 1));
            }
        }
        
        return answer;
    }
}