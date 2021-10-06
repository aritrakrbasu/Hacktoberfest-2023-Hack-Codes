## Question
There are N planets numbered 1 to N. You are a space merchant who earns by selling goods on these planets. Traveling to each planet requires you to pay for the fuel. The difficulty of traveling to i-th planet is Di. You need to plan your trip by choosing a consecutive sub segment of planets.

Your earning of the trip is calculated as follows -

You earn A coins for every planet you visit.
For each planet i you visit, you have to pay Ci coins for the fuel.
If you visit every planet with indices L to R, you also have to pay gap(L,R) coins where
gap(L,R)=max[(Dr−Dl)2] forL<=l<=r<=R
Calculate the maximum profit you can earn by traveling to a consecutive segment of planets. Note that if you travel to no planet at all, your net profit will be zero.

## Input:
First line will contain T, number of testcases. Then the testcases follow.
For each testcase, the first line contains two integers N and A
The next N lines contains two integers Ci,Di
Output:
For each testcase, output a single integer denoting the maximum profit you can earn.

## Constraints
1≤T≤10
1≤N≤3000
1≤A≤106
1≤Di,Ci≤106

## Sample Input:
1
3 10
1 3
3 1
2 2

## Sample Output:
20

## EXPLANATION:
For L = 1 and R = 3, we have profit = (3 - 1 + 1) * 10 - (1 + 3 + 2) - (3 - 1)*(3 - 1) = 20. This is the maximum possible profit for any sub-segment.