**Merge Intervals**
```
Input: [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
```

Algorithm:
1. Sort ascendingly acc. to starting time
2. For every next iterations check if start time is larger than previous largest end time

*Time Complexity: O(nlogn), Space Complexity: O(1) [ Extra vector is used for result]*

```
Arrays.sort(intervals,(int[] a,int[] b)->{
            return Integer.compare(a[0],b[0]);
        });
        List<int[]> list = new ArrayList<>();
        int n=intervals.length;
        int start=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                end = Math.max(intervals[i][1],end);
            }else{
                list.add(new int[]{start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        list.add(new int[]{start,end});
        int[][] res=new int[list.size()][];
        res=list.toArray(res);
        return res; 
```