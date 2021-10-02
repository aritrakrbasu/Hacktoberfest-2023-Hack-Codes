## Question

Chef and Divyam are playing a game with the following rules:

- First, an integer X! is written on a board.
- Chef and Divyam alternate turns; Chef plays first.
- In each move, the current player should choose a positive integer D which is divisible by up to Y distinct primes and does not exceed the integer currently written on the board. Note that 1 is not a prime.
- D is then subtracted from the integer on the board, i.e. if the integer written on the board before this move was A, it is erased and replaced by A−D.
- When one player writes 0 on the board, the game ends and this player wins.

Given X and Y, determine the winner of the game.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.


- The first and only line of each test case contains two space-separated integers X and Y.

## Output

For each test case, print a single line containing the string "Chef" if Chef wins the game or "Divyam" if Divyam wins (without quotes).

## Constraints
- 1 ≤ T ≤ 10^6


- 1 ≤ X,Y ≤ 10^6

## Sample Input 1 
3

1 2

3 1

2021 42
## Sample Output 1 
Chef

Divyam

Divyam