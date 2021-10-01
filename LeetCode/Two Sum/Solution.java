class Solution {
    public int[] twoSum(int[] nums, int target) {
        int p1 = 0,p2 = 0;
        for(int i = 0 ; i < nums.length-1; i++){
            for(int j = i + 1 ; j < nums.length ; j++){
                int sum = nums[i] + nums[j];
                if(sum == target){
                    p1 = i;
                    p2 = j;
                    i = nums.length;
                    break;
                }
            }
        }
        int[] res = {p1,p2};
        return res;
    }
}