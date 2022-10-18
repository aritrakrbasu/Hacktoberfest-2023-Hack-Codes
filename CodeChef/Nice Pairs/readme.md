##  Question
Given a string SS of length NN containing only numeric characters, find the number of Nice Pairs.

A Nice Pair is a pair of indices - (i, j)(i,j) such that 1 \leq i \lt j \leq N1≤i<j≤N and j - i = |S(j)-S(i)|

#### Input Format
First line will contain TT, number of testcases. Then the testcases follow.
The first line of each testcase contains a single integer, NN, the length of the string
The second line of each testcase contains a string SS of length NN. The string contains only numeric characters [0-9][0−9]

#### Output Format
For each testcase, output a single integer - the number of nice pairs in the given string.

### Constraints
1≤T≤1000
2≤N≤10<sup>5</sup>

String S contains only numeric characters
The sum of N over all test cases does not exceed 2.10<sup>5</sup>
 
### Sample Input 1
3
3
123
5
13492
8
94241234

### Sample Output 1
3
2
9

### Explanation:

### Test Case 1:
There are 33 nice pairs in the given string - (1,2) , (1,3) , (2,3)(1,2),(1,3),(2,3)
