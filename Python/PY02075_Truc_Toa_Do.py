class Pair:
    def __init__(self, a, b):
        self.a = a
        self.b = b

for _ in range(int(input())):
    n = int(input())
    a = []
    for _ in range(n):
        x, y = [int(x) for x in input().split()]
        a.append(Pair(x, y))
    a = sorted(a, key=lambda x: x.b)
    s, k = 1, a[0].b
    for i in a[1:]:
        if i.a >= k:
            k = i.b
            s += 1
    print(s)