def minimumBribes(q):

    bribes = 0

    for i, p in enumerate(q):

        # i goes from 0 to n-1
        # p goes from 1 to n
        if (p - 1) - i > 2:
            print("Too chaotic")
            return

        for j in range(max((p-1)-1, 0), i):
            if q[j] > p:
                bribes += 1

    print(bribes)

    return
