class Solution {
   public int singleNumber(int[] nums) {
    HashSet<Integer> set = new HashSet<>();
    HashSet<Integer> duplicates = new HashSet<>();

    for (int num : nums) {
        if (duplicates.contains(num)) {
            continue;
        }

        if (set.contains(num)) {
            set.remove(num);
            duplicates.add(num);
        } else {
            set.add(num);
        }
    }

    return set.iterator().next();
}
    }