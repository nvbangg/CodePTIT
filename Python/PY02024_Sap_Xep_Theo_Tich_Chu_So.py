import math

def prod_digit(n):
    return math.prod(int(ch) for ch in str(n))

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(key=lambda x: (prod_digit(x), x))
    print(*a)
