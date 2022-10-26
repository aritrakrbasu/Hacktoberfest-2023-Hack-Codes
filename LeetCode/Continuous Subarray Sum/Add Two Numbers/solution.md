**Rearrange an array using O(1)**
Algorithm:
1. Initialize a Hashmap with {0:-1} and sum = 0
2. Iterate over `nums.length` and do sum+=nums[i];
3. If hashMaphashMaphashMap does not contain key sum%ksum \% ksum%k (this remainder modulo kkk occurs for the first time) then hashMap[sum%k]←i+1hashMap[sum % k] ← i + 1hashMap[sum%k]←i+1 
4. If hashMap[sum%k]<i (the subarray size is at least two) return `true`.
5. Return `false`

*Time Complexity: O(nums.length), Space Complexity: O(min(nums.length,k))*