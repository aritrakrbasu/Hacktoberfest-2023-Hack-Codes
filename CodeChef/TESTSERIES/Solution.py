for __ in range(int(input())):
    R1,R2,R3,R4,R5= map(int,input().split())
    L = [R1,R2,R3,R4,R5]
    if L.count(2)>L.count(1):
        print("ENGLAND")
    elif L.count(1)>L.count(2):
        print("INDIA")
    else:
        print("DRAW")
