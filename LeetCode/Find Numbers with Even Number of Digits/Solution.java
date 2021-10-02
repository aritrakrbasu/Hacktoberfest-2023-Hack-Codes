public class Solution {
    public int findNumbers(int[] nums) {
        int i,ans=0,c,temp=0;
        for(i=0; i<nums.length; i++)
        {
            temp = nums[i];
            c=0;
            while(temp>0)
            {
                temp=temp/10;
                c++;
            }
            if(c%2==0)
                ans++;
        }
        return ans;
    }
}
