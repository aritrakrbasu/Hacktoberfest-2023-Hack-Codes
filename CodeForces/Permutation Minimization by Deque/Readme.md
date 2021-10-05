Link to the question https://codeforces.com/contest/1579/problem/E1

E1. Permutation Minimization by Deque
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
In fact, the problems E1 and E2 do not have much in common. You should probably think of them as two separate problems.

A permutation p of size n is given. A permutation of size n is an array of size n in which each integer from 1 to n occurs exactly once. For example, [1,4,3,2] and [4,2,1,3] are correct permutations while [1,2,4] and [1,2,2] are not.

Let us consider an empty deque (double-ended queue). A deque is a data structure that supports adding elements to both the beginning and the end. So, if there are elements [1,5,2] currently in the deque, adding an element 4 to the beginning will produce the sequence [4,1,5,2], and adding same element to the end will produce [1,5,2,4].

The elements of the permutation are sequentially added to the initially empty deque, starting with p1 and finishing with pn. Before adding each element to the deque, you may choose whether to add it to the beginning or the end.

For example, if we consider a permutation p=[3,1,2,4], one of the possible sequences of actions looks like this:

 1.	add 3 to the end of the deque:	deque has a sequence [3] in it;
 2.	add 1 to the beginning of the deque:	deque has a sequence [1,3] in it;
 3.	add 2 to the end of the deque:	deque has a sequence [1,3,2] in it;
 4.	add 4 to the end of the deque:	deque has a sequence [1,3,2,4] in it;
Find the lexicographically smallest possible sequence of elements in the deque after the entire permutation has been processed.

A sequence [x1,x2,…,xn] is lexicographically smaller than the sequence [y1,y2,…,yn] if there exists such i≤n that x1=y1, x2=y2, …, xi−1=yi−1 and xi<yi. In other words, if the sequences x and y have some (possibly empty) matching prefix, and the next element of the sequence x is strictly smaller than the corresponding element of the sequence y. For example, the sequence [1,3,2,4] is smaller than the sequence [1,3,4,2] because after the two matching elements [1,3] in the start the first sequence has an element 2 which is smaller than the corresponding element 4 in the second sequence.

Input
The first line contains an integer t (1≤t≤1000) — the number of test cases.

The next 2t lines contain descriptions of the test cases.

The first line of each test case description contains an integer n (1≤n≤2⋅105) — permutation size. The second line of the description contains n space-separated integers pi (1≤pi≤n; all pi are all unique) — elements of the permutation.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
Print t lines, each line containing the answer to the corresponding test case. The answer to a test case should contain n space-separated integer numbers — the elements of the lexicographically smallest permutation that is possible to find in the deque after executing the described algorithm.

Example

Input
5
4
3 1 2 4
3
3 2 1
3
3 1 2
2
1 2
2
2 1

Output
1 3 2 4 
1 2 3 
1 3 2 
1 2 
1 2 