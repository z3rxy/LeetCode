class Solution {
    public char slowestKey(int[] releaseTimes, String keysPressed) {
      int maxtime = 0, index = 0;
        for(int i = 0; i < releaseTimes.length; i++){
            if(i == 0) maxtime = releaseTimes[i];
            else if (releaseTimes[i] - releaseTimes[i - 1] > maxtime){
                maxtime = releaseTimes[i] - releaseTimes[i - 1];
                index = i;
            }
            else if (releaseTimes[i] - releaseTimes[i - 1] == maxtime){
                if(keysPressed.charAt(index) < keysPressed.charAt(i)){
                    maxtime = releaseTimes[i] - releaseTimes[i - 1];
                    index = i;
                }
            }
        }
        return keysPressed.charAt(index);  
    }
}