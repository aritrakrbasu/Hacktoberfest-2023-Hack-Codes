# [Number Line Jumps](https://www.hackerrank.com/challenges/kangaroo/problem)

You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

- The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
- The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.

You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

## Example

x1 = 2
v1 = 1
x2 = 1
v2 = 2

After one jump, they are both at x = 3, (x1 + v1 = 2 + 1, x2 + v2 = 1 + 2), so the answer is YES.

## Function Description

Complete the function kangaroo in the editor below.

kangaroo has the following parameter(s):

- int x1, int v1: starting position and jump distance for kangaroo 1
- int x2, int v2: starting position and jump distance for kangaroo 2

## Returns
- string: either YES or NO

## Input Format
A single line of four space-separated integers denoting the respective values of x1, v1, x2, and v2.

## Constraints
0 ≤ x1 < x2 ≤ 10000
1 ≤ v1 < 10000
1 ≤ v2 ≤ 10000

## Sample Input 0
```
0 3 4 2
```
## Sample Output 0
```
YES
```

## Sample Input 1
```
0 2 5 3
```
## Sample Output 1
```
NO
```
