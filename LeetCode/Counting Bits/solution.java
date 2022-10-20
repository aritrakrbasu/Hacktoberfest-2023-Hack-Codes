class Solution {
    public int[] countBits(int n) {
        int[] x=new int[n+1];
        x[0]=0;
        for(int i=1;i<n+1;i++){
            x[i]=i%2+x[i/2];
        }
        return x;
    }
}
