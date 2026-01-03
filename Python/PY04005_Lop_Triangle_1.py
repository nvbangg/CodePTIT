import math


class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distance(self, other):
        res = math.sqrt((other.x - self.x) ** 2 + (other.y - self.y) ** 2)
        return res

class Triangle:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def perimeter(self):
        ab = self.a.distance(self.b)
        bc = self.b.distance(self.c)
        ca = self.c.distance(self.a)
        if max(ab, bc, ca) * 2 >= ab + bc + ca: 
            return 0
        return ab + bc + ca


a = []
T = int(input())
for _ in range(T):
    a += list(map(float, input().split()))
i = 0
for _ in range(T):
    tg = Triangle(Point(a[i], a[i+1]), Point(a[i+2], a[i+3]), Point(a[i+4], a[i+5]))
    res = tg.perimeter()
    print(f"{res:.3f}" if res else "INVALID")
    i += 6