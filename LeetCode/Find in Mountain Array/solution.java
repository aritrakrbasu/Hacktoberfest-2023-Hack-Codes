/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int start = 0;
        int end = mountainArr.length() - 1;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1))
                start = mid+1;
            else
                end = mid-1;
        }
        int ind = start;
        end = start;
        start = 0;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(mountainArr.get(mid) == target)
                return mid;
            else if(mountainArr.get(mid)<target)
                start = mid+1;
            else
                end = mid-1;
        }
        end = mountainArr.length() - 1;
        start = ind;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(mountainArr.get(mid) == target)
                return mid;
            else if(mountainArr.get(mid)>target)
                start = mid+1;
            else
                end = mid-1;
        }
        return -1;
    }
}
