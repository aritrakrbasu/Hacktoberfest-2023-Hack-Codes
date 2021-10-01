## Question
You are given a positive integer N. Consider the sequence S=(1,2,…,N). You should choose two elements of this sequence and swap them.

A swap is nice if there is an integer M (1≤M<N) such that the sum of the first M elements of the resulting sequence is equal to the sum of its last N−M elements. Find the number of nice swaps.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print a single line containing one integer ― the number of nice swaps.

## Constraints
1≤T≤106
1≤N≤109
Subtasks
Subtask #1 (10 points):

T≤10
N≤103
Subtask #2 (30 points):

T≤10
N≤106
Subtask #3 (60 points): original constraints

## Sample Input 1 
5
1
2
3
4
7
## Sample Output 1 
0
0
2
2
3