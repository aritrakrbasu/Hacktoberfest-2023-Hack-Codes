public int[] indexCounts(int[][] requests, int len) {
        int[] rangeCounts = new int[len + 1];
        int[] indexCounts = new int[len];
        int rangeCount = 0;
        for (int[] r : requests) {
            rangeCounts[r[0]] += 1;
            rangeCounts[r[1] + 1] -= 1;
        }
        for (int i = 0; i < len; i++) {
            rangeCount += rangeCounts[i];
            indexCounts[i] = rangeCount;
        }
        return indexCounts;
    }