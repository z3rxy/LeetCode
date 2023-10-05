class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
    PriorityQueue<int[]> minHeap = new PriorityQueue<>((a, b) -> {
        if (a[1] != b[1]) {
            return a[1] - b[1];
        } else {
            return a[0] - b[0];
        }
    });

    for (int i = 0; i < mat.length; i++) {
        int soldiers = countSoldiers(mat[i]);
        minHeap.offer(new int[]{i, soldiers});
    }

    int[] result = new int[k];
    for (int i = 0; i < k; i++) {
        result[i] = minHeap.poll()[0];
    }

    return result;
}

private static int countSoldiers(int[] row) {
    int left = 0;
    int right = row.length - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (row[mid] == 1) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}
}


