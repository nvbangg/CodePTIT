from math import sqrt

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distance(self, other):
        return sqrt((self.x - other.x) ** 2 + (self.y - other.y) ** 2)

def heron(a, b, c):
    return sqrt((a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c)) / 4

point = []
t = int(input())
for x in range(t):
    point += [float(i) for i in input().split()]
i = 0
for _ in range(t):
    pA = Point(point[i], point[i + 1])
    pB = Point(point[i + 2], point[i + 3])
    pC = Point(point[i + 4], point[i + 5])
    disA = pA.distance(pB)
    disB = pB.distance(pC)
    disC = pA.distance(pC)
    if max(disA, disB, disC) * 2 >= disA + disB + disC:
        print('INVALID')
    else:
        S = sqrt((disA + disB + disC) * (disA + disB - disC) * (disA - disB + disC) * (-disA + disB + disC)) / 4
        print(f"{S:.2f}")
    i += 6