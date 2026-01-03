from math import gcd

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    c = list(map(int, input().split()))
    g = {0: 0}
    b = [0]
    for i in range(n):
        for G in b:
            d = gcd(G, a[i])
            cost = c[i] + g[G]
            if d not in g:
                g[d] = cost
                b.append(d)
            else:
                g[d] = min(g[d], cost)
    if 1 not in g:
        g[1] = -1
    print(g[1])