# Diagonal movement

Problem Code: **DIAGMOVE**

## Question

Given the coordinates (x,y)(x,y) of a point in 2-D plane. Find if it is possible to reach (x,y)(x,y) from (0,0)(0,0). The only possible moves from any coordinate (i,j)(i,j) are as follows:

Go to the point with coordinates (i+1,j+1)(i+1,j+1).

Go to the point with coordinates (i+1,j−1)(i+1,j−1)

Go to the point with coordinates (i−1,j+1)(i−1,j+1).

Go to the point with coordinates (i−1,j−1)(i−1,j−1).

## Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, two integers x,y.

## Output Format
For each test case, print YES if it is possible to reach (x,y) from (0,0) otherwise print NO.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical.

## Constraints
* _1≤T≤2⋅10^4_
* _−10^9≤x,y≤10^9_

### Sample Input 1 
 `6`
 
 `0 2`
 
 `1 2`
 
 `-1 -3`
 
 `-1 0`
 
 `-3 1`
 
 `2 -1`
 
### Sample Output 1 
YES

NO

YES

NO

YES

NO
