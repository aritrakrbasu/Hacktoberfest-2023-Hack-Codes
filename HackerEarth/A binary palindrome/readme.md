## Problem
You are given a number `N` . In one operation, you can either increase the value of `N` by 1 or decrease the value of `N` by 1.

Determine the minimum number of operations required (possibly zero) to convert number `N` to a number `P` such that binary representation of `P` is a palindrome.

**Note:** A binary representation is said to be a palindrome if it reads the same from left-right and right-left.

## Input format

The first line contains an integer `T` denoting the number of test cases.
For each test case, the first line contains an integer `N`.

## Output format

For each test case in a new line, print the minimum number of operations required. 

## Constraints

1<=T<=10^5
0<=N<=2x10^9 

## Sample Input
2
6
9

## Sample Output
1
0

## Explanation
### For first test case

If we decrease the value of N by 1. Then N = 5, whose binary representation is 101 which is a palindrome.
Hence, minimum 1 operation is required.

### For second test case

N = 9, has binary representation 1001 which is a palindrome.
Hence, 0 operations is required.