class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length, m = nums2.length, indexNew = 0, indexN = 0, indexM = 0;
        int[] newArr = new int[n + m];
        double answer;

        while(indexN <= n - 1 && indexM <= m - 1){
            if(nums1[indexN] <= nums2[indexM]){
                newArr[indexNew] = nums1[indexN];
                indexN++;
                indexNew++;
            }
            else {
                newArr[indexNew] = nums2[indexM];
                indexM++;
                indexNew++;
            }
        }
        if(indexN == n){
            while(indexM <= m - 1){
                newArr[indexNew] = nums2[indexM];
                indexM++;
                indexNew++;
            }
        }
        else if(indexM == m){
            while(indexN <= n - 1){
                newArr[indexNew] = nums1[indexN];
                indexN++;
                indexNew++;
            }
        }

      
        if((n + m) % 2 == 0){
            answer = ((double) newArr[(n + m) / 2 - 1] + (double) newArr[(n + m) / 2]) / 2.0;
        }
        else {
            answer = newArr[(n + m) /2];
        }
        return answer;
    }
}