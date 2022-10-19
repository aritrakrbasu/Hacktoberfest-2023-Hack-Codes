**Link to problem:** https://www.codechef.com/submit/FOOTCUP

**Description:**

It is the final day of La Liga. Chef has a certain criteria for assessing football matches.
In particular, he only likes a match if:

- The match ends in a draw, and,
- At least one goal has been scored by either team.

Given the goals scored by both the teams as X and Y respectively, determine whether Chef will like the match or not.

**Input:**

- The first line of input will contain a single integer T, denoting the number of test cases. The description of T test cases follows.

- Each test case consists of a single line of input containing two space-separated integers X and Y — the goals scored by each team.

**Output:**

For each test case, output YES if Chef will like the match, else output NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).

**Constraints:**
 
 > - 1≤T≤100
 
 > - 0≤X,Y≤9
 
**Sample Input 1**

    4
    1 1
    0 1
    0 0
    2 2

**Sample Output 1**

    YES
    NO
    NO
    YES
