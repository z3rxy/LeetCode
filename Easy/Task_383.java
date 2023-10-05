class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
         boolean ind = false;
        char[] sortedRansom = ransomNote.toCharArray();
        char[] sortedMagazine = magazine.toCharArray();
        Arrays.sort(sortedRansom);
        Arrays.sort(sortedMagazine);
        for(int i = 0; i < sortedRansom.length; i++){
           for(int j = 0; j < sortedMagazine.length; j++){
               if(sortedRansom[i] == sortedMagazine[j] && sortedMagazine[j] != '.' && sortedRansom[i] != '.'){
                   sortedRansom[i] = sortedMagazine[j] = '.';
                   ind = true;
               }
           }
           if(!ind) return false;
           ind = false;
        }
        return true;
    }
}