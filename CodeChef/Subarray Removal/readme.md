### Problem link :https://www.codechef.com/submit/SUBARRAYREM
### Problem
Chef has a binary array AA of length NN. In one operation, Chef does the following:

1. Select any L and R such that (1<=L<R<=|A|)

2. Add A(L) + A(L+1) ⊕…⊕A(R) to his score (Here, ⊕ denotes the bitwise XOR operation)
3. Remove the subarray A(L...R) from A
​
Determine the maximum score Chef can get after performing the above operation any number of times.

### Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the size of the array A.
The second line of each test case contains N space-separated integers A1, A2,..., AN denoting the array A.
### Output Format
For each test case, output the maximum score Chef can get.


### Sample 1:
### Input
3
5
1 0 0 0 1
3
1 1 1
3
0 0 0
### OUTPUT
2
1
0
Explanation:
Test Case 1: We can perform the following moves:

A = [1, 0, 0, 0, 1]A=[1,0,0,0,1]. Select L = 1L=1 and R = 3R=3 and remove subarray [1, 0, 0][1,0,0]. AA becomes [0, 1][0,1].
A = [0, 1]A=[0,1]. Select L = 1L=1 and R = 2R=2 and remove subarray [0, 1][0,1]. AA becomes [][].
Total score = 1 + 1 = 2=1+1=2

Test Case 2: We can perform the following move:

A = [1, 1, 1]A=[1,1,1]. Select L = 1L=1 and R = 3R=3 and remove subarray [1, 1, 1][1,1,1]. AA becomes [][].
Total score = 1=1

