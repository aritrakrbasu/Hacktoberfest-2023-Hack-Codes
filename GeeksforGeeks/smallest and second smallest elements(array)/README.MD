Find the smallest and second smallest elements in an array.

Example 1:

Input:  arr[] = {12, 13, 1, 10, 34, 1}
Output: The smallest element is 1 and
        second Smallest element is 10

A Simple Solution is to sort the array in increasing order. The first two elements in the sorted array would be the two smallest elements. In this approach, if the smallest element is present more than one time then we will have to use a loop for printing the unique smallest and second smallest elements.

Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ K ≤ N*M ≤ 10^6
