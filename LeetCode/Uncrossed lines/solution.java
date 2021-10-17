class Solution {
    public int maxUncrossedLines(int[] nums1, int[] nums2) {
        int[][] tmp = new int[nums1.length][nums2.length];
        return getSol(nums1,0,nums2,0,tmp);
    }
    
    private int getSol(int[] nums1,int i,int[] nums2,int j, int[][] tmp){
        if(i==nums1.length||j==nums2.length)return 0;
        if(tmp[i][j]>0)return tmp[i][j];
        int cnt =0;
        if(nums1[i]==nums2[j]) cnt+=1+getSol(nums1,i+1,nums2,j+1,tmp);
        else{
            cnt+=Math.max(getSol(nums1,i+1,nums2,j,tmp),getSol(nums1,i,nums2,j+1,tmp));
        }
        tmp[i][j]=cnt;
        return cnt;
    }
}