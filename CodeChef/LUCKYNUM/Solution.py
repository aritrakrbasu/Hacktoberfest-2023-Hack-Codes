for __ in range(int(input())):
    A,B,C= map(int,input().split())
    if A == 7 or B == 7 or C == 7 or A == B == C == 7:
        print("YES")
    else:
        print("NO")
