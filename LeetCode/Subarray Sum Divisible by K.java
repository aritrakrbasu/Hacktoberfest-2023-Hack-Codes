class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        int count =0;
        int sum =0;
        int rem =0;
        HashMap<Integer,Integer> map = new HashMap<>();
        map.put(0,1); //initially sum is 0 and it appeared once already
        
        for(int num:nums){
            sum+=num;
            rem=sum%k;
            
            if(rem<0){
                rem+=k; // if k=7 and rem = -2 then rem+k =2 and the gap betwen 2 and -5 is 7 which is divisible by 7
            }
            if(map.containsKey(rem)){
                count+=map.get(rem);
                map.put(rem, map.get(rem)+1);
            }
            else{
                map.put(rem,1);
            }
        }
        System.out.println(map.entrySet());
        return count;
    }
}