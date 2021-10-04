***Bottom Up Approach***

- First check the base cases i.e. ```n=0,1,2```
- Then for each ```nums[i]``` from ```i = 2 to n```, Maximum loot = Math.max(Maximum loot till last valid house + current house loot, Maximum loot upto previous house)

```
int[] dp = new int[n];
dp[0] = nums[0];
dp[1] = Math.max(nums[0],nums[1]);
for(int i=2;i<n;i++){
		dp[i] = Math.max(nums[i]+dp[i-2],dp[i-1]);
}
```
