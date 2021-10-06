**Problem Link**:-https://www.codechef.com/problems/TOTCRT

**Question**

Codechef challenges have three divisions. In one challenge, there are N problems in each division, but some problems may be shared among multiple divisions. Each problem is uniquely identified by a code — a string containing only uppercase English letters. Each participant can only submit in one of the divisions.

Chef wants to find the number of correct solutions, in total among all 3 divisions, for each problem. Given a list of N problem codes with the numbers of correct solutions for each problem in each division, find the total number of correct solutions for each problem and sort them in non-decreasing order.

**Input**

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.

The first line of each test case contains a single integer N.

N lines follow. For each valid i, the i-th of these lines contains a string S3,i followed by a space and an integer C3,i — the problem code and the number of correct solutions on the i-th problem in the third division.

N more lines follow. For each valid i, the i-th of these lines contains a string S2,i followed by a space and an integer C2,i — the problem code and the number of correct solutions on the i-th problem in the second division.

Finally, N more lines follow. For each valid i, the i-th of these lines contains a string S1,i followed by a space and an integer C1,i — the problem code and the number of correct solutions on the i-th problem in the first division.

**Output**

For each test case, let P be the number of distinct problems; you should print P space-separated integers — the number of solutions for each of these problems, sorted in non-decreasing order.

**Constraints**

1≤T≤10

1≤N≤2⋅104

1≤|S1,i|,|S2,i|,|S3,i|≤8 for each valid i

S1,i,S2,i,S3,i contain only uppercase English letters for each valid i

1≤C1,i,C2,i,C3,i≤5⋅108 for each valid i

the problem codes in each division are pairwise distinct, but some problem codes may appear in multiple divisions

the sum of N over all test cases does not exceed 105

**Sample Input 1**

3

1

A 1

B 2

C 3

2

AA 1

AB 1

AB 1

AC 1

AC 1

AD 1

1

Z 100

Z 100

Z 100

**Sample Output 1**

1 2 3

1 1 2 2

300

**Explanation**

Example case 1: There is only 1 problem in each division and no problems are shared among divisions, so the total number of distinct problems is 3 and the numbers of solutions are: 1 for "A", 2 for "B", 3 for "C".

Example case 2: There are 2 problems in each division and each pair of consecutive divisions shares 1 problem, so the total number of distinct problems is 4 and the numbers of solutions are: 1 for "AA", 2 for "AB", 2 for "AC", 1 for "AD". We need to sort them in non-decreasing order, so the final answer is (1,1,2,2).

Example case 3: There is only 1 problem "Z" in the entire contest, shared among all divisions, and the number of solutions for it is 300.
