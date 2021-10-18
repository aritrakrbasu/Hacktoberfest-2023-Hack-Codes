# Enter your code here. Read input from STDIN. Print output to STDOUT
# Designer Door Mat in Python - HackerRank Solution
# Enter your code here. Read input from STDIN. Print output to STDOUT
# Designer Door Mat in Python - HackerRank Solution START
N, M = map(int, input().split())
for i in range(1, N, 2):
    print(str('.|.' * i).center(M, '-'))
print('WELCOME'.center(M, '-'))
for i in range(N-2, -1, -2):
    print(str('.|.' * i).center(M, '-'))
# Designer Door Mat in Python - HackerRank Solution END