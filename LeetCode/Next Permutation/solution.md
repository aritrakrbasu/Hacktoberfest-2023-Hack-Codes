**Next Permutation**
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers. If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

Algorithm:
1. Traverse from the end and find a position ```i``` where ```arr[i-1] < arr[i]```, pos = i-1
2. Now from ```arr[pos+1...]```, find the first element from last which is greater than ```arr[pos]``` and swap ```arr[i], arr[pos]```
3. Reverse ```arr[pos...]```. Hint: ```reverse(nums.begin() + k + 1, nums.end());```

*Time Complexity: O(n), Space Complexity: O(1)*