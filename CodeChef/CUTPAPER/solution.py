# author: Aritra Banerjee

test = int(input())

while(test>0):
    
    sideN,sideK = map(int, input().split(" "))
    
    sqPerSide= sideN//sideK
    
    print(sqPerSide*sqPerSide)
    
    test-=1

