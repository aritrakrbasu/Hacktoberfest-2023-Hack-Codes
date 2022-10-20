**Link to problem:** https://codeforces.com/contest/1742/problem/D

**Description:**

time limit per test : 3 second
memory limit per test : 256 megabytes
input : standard input
output : standard output

Given an array of n positive integers a1,a2,…,an (1≤ai≤1000). Find the maximum value of i+j such that ai and aj are coprime,† or −1 if no such i, j exist.

For example consider the array [1,3,5,2,4,7,7]. The maximum value of i+j that can be obtained is 5+7, since a5=4 and a7=7 are coprime.

† Two integers p and q are [coprime](https://en.wikipedia.org/wiki/Coprime_integers) if the only positive integer that is a divisor of both of them is 1 (that is, their [greatest common divisor](https://en.wikipedia.org/wiki/Greatest_common_divisor) is 1).

### Input

The input consists of multiple test cases. The first line contains an integer t (1≤t≤10) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n (2≤n≤2⋅105) — the length of the array.

The following line contains n space-separated positive integers a1, a2,..., an (1≤ai≤1000) — the elements of the array.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

### Output

For each test case, output a single integer  — the maximum value of i+j such that i and j satisfy the condition that ai and aj are coprime, or output −1 in case no i, j satisfy the condition.

### Input

6
3
3 2 1
7
1 3 5 2 4 7 7
5
1 2 3 4 5
3
2 2 4
6
5 4 3 15 12 16
5
1 2 2 3 6
8


### Output

6
12
9
-1
10
7
