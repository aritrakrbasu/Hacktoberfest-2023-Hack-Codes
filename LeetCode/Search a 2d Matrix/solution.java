class Solution {
    public boolean searchMatrix(int[][] m, int target) {
        int row = m.length,col = m[0].length;
        int low = 0, high = row*col-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int e = m[mid/col][mid%col];
            if(e>target)high = mid-1;
            else if(e<target)low = mid+1;
            else return true;;
        }
        return false;
    }
}