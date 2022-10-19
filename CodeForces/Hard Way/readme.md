**Link to problem:** https://codeforces.com/contest/1642/problem/A

**Description:**

time limit per test : 1 second
memory limit per test : 256 megabytes
input : standard input
output : standard output


Sam lives in Awesomeburg, its downtown has a triangular shape. Also, the following is true about the triangle:

its vertices have integer coordinates,
the coordinates of vertices are non-negative, and
its vertices are not on a single line.
He calls a point on the downtown's border (that is the border of the triangle) safe if he can reach this point from at least one point of the line y=0 walking along some straight line, without crossing the interior of the triangle.

Find the total length of the unsafe parts of the downtown border. It can be proven that these parts are segments and their number is finite

### Input

Each test contains multiple test cases. The first line contains a single integer t (1≤t≤1000) — the number of test cases. Description of the test cases follows.

Each test case contains three lines, each of them contains two integers xi, yi (0≤xi,yi≤109) — coordinates of the vertices of the downtown's border.

### Output

For each test case print a single number — the answer to the problem.

Your answer will be considered correct if its absolute or relative error does not exceed 10−9. Formally let your answer be a, jury answer be b. Your answer will be considered correct if |a−b|max(1,|b|)≤10<pow>−9</pow>.

### Input

5
8 10
10 4
6 2
4 6
0 1
4 2
14 1
11 2
13 2
0 0
4 0
2 4
0 1
1 1
0 0

### Output

0.0000000
0
2.0000
0.00
1

