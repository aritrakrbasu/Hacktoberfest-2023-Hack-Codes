**Search in a sorted 2D Matrix**
Algorithm:
1. Start from top right corner.
2. Check if target is smaller or bigger than current element
3. If target is bigger then it is present in next row
4. If target is smaller, then it is present in current row
5. So, now traverse from right to left till the target.

*Time Complexity: O(n+m), Space Complexity: O(1)*
___
Algorithm:
1. Use binary search.
2. For a value of mid, the element will be ```matrix[mid/col][mid%col]```.

*Time Complexity: O(log(mn)), Space Complexity: O(1)*