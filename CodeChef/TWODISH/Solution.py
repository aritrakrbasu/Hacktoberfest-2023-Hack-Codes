for __ in range(int(input())):
        N,A,B,C = map(int,input().split( ))
        if A+C >= N and B>=N:
                print("YES")
        else:
                print("NO")
