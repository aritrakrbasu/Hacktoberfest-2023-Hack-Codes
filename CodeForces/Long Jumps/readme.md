## Question

Polycarp found under the Christmas tree an array a of n elements and instructions 

for playing with it.

At first, choose index i  (1≤i≤n) --- starting position in the array. Put the chip at the 

index i (on the value ai).

While i≤n , add ai to your score and move the chip ai positions to the right (i.e. replace i with i+ai). If i>n , then Polycarp ends the game.

For example, if n=5 and a=[7,3,1,2,3], then the following game options are possible:

    Polycarp chooses i=1

    Game process: i=1⟶+78. The score of the game is: a1=7

Polycarp chooses i=2

    Game process: i=2⟶+35⟶+38. The score of the game is: a2+a5=6

Polycarp chooses i=3

    Game process: i=3⟶+14⟶+26. The score of the game is: a3+a4=3

Polycarp chooses i=4

    Game process: i=4⟶+26. The score of the game is: a4=2

Polycarp chooses i=5

        Game process: i=5⟶+38. The score of the game is: a5=3

Help Polycarp to find out the maximum score he can get if he chooses the starting index in an optimal way.

## Input Format

The first line contains one integer t(1≤t≤104) --- the number of test cases. 

Then t test cases follow.  The first line of each test case contains one integer

 n(1≤n≤2⋅105) --- the length of the array a .

The next line contains n integers a1,a2,...,an (1≤ai≤109) --- elements of the array a.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5 .

## Output Format

For each test case, output on a separate line one number --- the maximum score that Polycarp can get by playing the game on the corresponding array according to the instruction from the statement. Note that Polycarp chooses any starting position from 1

to n in such a way as to maximize his result.

## Constraints

1≤t≤10000

1≤n≤200000

1≤ai≤1000000000

## Sample Input 1

4

5

7 3 1 2 3

3

2 1 4

6

2 1000 2 3 995 1

5

1 1 1 1 1

## Sample Output 1

7

6

1000

5
