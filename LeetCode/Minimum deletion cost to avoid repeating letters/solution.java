class Solution {
    public int minCost(String s, int[] cost) {
        int n=s.length(),cnt=0;
        int gsum=0,gmax=0;
        
        for(int i=0;i<n;i++){
            if(i>0&&s.charAt(i)!=s.charAt(i-1)){
                cnt+=gsum-gmax;
                gsum=0;
                gmax=0;
            }
            gsum+=cost[i];
            gmax=Math.max(gmax,cost[i]);
        }
        cnt += gsum-gmax;
        
        return cnt;
    }
}