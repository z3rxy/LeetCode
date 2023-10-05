class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        ArrayList<Boolean> answer = new ArrayList<>(candies.length);
        int max = 0;
        
        for(int i : candies){
            if(i > max) max = i;
        }
        
        for(int i = 0; i < candies.length; i++){
            if(candies[i] + extraCandies >= max) answer.add(i, true);
            else answer.add(i, false);
        }
        
        return answer;
    }
}