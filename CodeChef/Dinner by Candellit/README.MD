## QUESTION

Chef is having a candlelit dinner with his girlfriend at his place. Currently, it is time 0, Chef just managed to light a candle, but he is out of matchsticks.

Since Chef has an infinite supply of (unlit) candles, he can use the following strategy: each second (starting at time 0), he takes one lit candle and lights up X other candles using it. This process takes 1 unit of time to complete, i.e. if Chef starts lighting up X candles at a time t1, he is able to finish at the time t1+1.

However, since candle wax is limited, a candle can only burn for Y units of time and then it is extinguished.

Chef's girlfriend arrives at a time A — specifically, after all the candles that were supposed to get extinguished at time A have been extinguished and after Chef lights up all the candles that he was lighting up since time A−1. Now Chef wants to know the maximum number of candles which can be lit at the time A to impress his girlfriend.

## Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers A, Y and X.
Output
For each test case, print a single line containing one integer — the maximum number of lit candles Chef can impress his girlfriend with.

## Constraints
1≤T≤105
1≤A,Y,X≤109
Subtasks
Subtask #1 (40 points): A≥Y
Subtask #2 (60 points): original constraints

## Sample Input 1 
3
1 1 1
1 2 1
2 2 1

## Sample Output 1 
1
2
2

## Explanation


Example case 1: At the time 0, there is one lit candle, using which we light 1 more candle. At the time 1, the starting candle gets extinguished and the candle which we started lighting up at the time 0 is lit, so we have only 1 candle lit up when Chef's girlfriend arrives.

Example case 2: At the time 0, there is one lit candle, using which we light 1 more candle. At the time 1, the candle which we started lighting up at the time 0 and the starting candle are both lit.

Example case 3: At the time 0, there is one lit candle, using which we light 1 more candle. At the time 1, the candle which we started lighting up at time 0 is lit, and we start lighting up one more candle. At the time 2, the starting candle gets extinguished and the candle which we started lighting up at the time 1 is lit. In total, we have 2 lit candles when Chef's girlfriend arrives.