class Solution {
    public int[][] merge(int[][] intervals) {
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
    }
}