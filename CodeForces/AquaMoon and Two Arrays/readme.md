#author name: Pratik
#Problem Link: https://codeforces.com/contest/1546/problem/A
#Description:

time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
AquaMoon and Cirno are playing an interesting game with arrays. Cirno has prepared two arrays a and b, both consist of n non-negative integers. AquaMoon can perform the following operation an arbitrary number of times (possibly zero):

She chooses two indices i and j (1≤i,j≤n), then decreases the i-th element of array a by 1, and increases the j-th element of array a by 1. The resulting values at i-th and j-th index of array a are ai−1 and aj+1, respectively. Each element of array a must be non-negative after each operation. If i=j this operation doesn't change the array a.
AquaMoon wants to make some operations to make arrays a and b equal. Two arrays a and b are considered equal if and only if ai=bi for all 1≤i≤n.

Help AquaMoon to find a sequence of operations that will solve her problem or find, that it is impossible to make arrays a and b equal.

Please note, that you don't have to minimize the number of operations.

Input
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤100) — the number of test cases.

The first line of each test case contains a single integer n (1≤n≤100).

The second line of each test case contains n integers a1,a2,…,an (0≤ai≤100). The sum of all ai does not exceed 100.

The third line of each test case contains n integers b1,b2,…,bn (0≤bi≤100). The sum of all bi does not exceed 100.

Output
For each test case print "-1" on the only line if it is impossible to make two arrays equal with some sequence of operations.

Otherwise, print an integer m (0≤m≤100) in the first line — the number of operations. Then print m lines, each line consists of two integers i and j — the indices you choose for the operation.

It can be proven that if it is possible to make two arrays equal with some sequence of operations, there exists a sequence with m≤100.

If there are multiple possible solutions, you can print any.

Example
inputCopy
4
4
1 2 3 4
3 1 2 4
2
1 3
2 1
1
0
0
5
4 3 2 1 0
0 1 2 3 4
outputCopy
2
2 1
3 1
-1
0
6
1 4
1 4
1 5
1 5
2 5
2 5
Note
In the first example, we do the following operations:

i=2, j=1: [1,2,3,4]→[2,1,3,4];
i=3, j=1: [2,1,3,4]→[3,1,2,4];
In the second example, it's impossible to make two arrays equal.