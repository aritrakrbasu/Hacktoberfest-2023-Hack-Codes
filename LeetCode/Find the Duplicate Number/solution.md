**Find duplicate number in array.**
Algorithm:
1. Change every nums[curr] to negative
2. If nums[curr] is negative before changing then curr is duplicate
3. curr = abs(nums[i])

*Time Complexity: O(n), Space Complexity: O(1)*