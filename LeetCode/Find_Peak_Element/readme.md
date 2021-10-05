# Find Peak Element

## Question 

A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.

 
## Sample Input/Output

- Example 1:

Input: nums = [1,2,3,1]
Output: 2

- Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5

 

## Constraints:

1 <= nums.length <= 1000
-231 <= nums[i] <= 231 - 1
nums[i] != nums[i + 1] for all valid i.