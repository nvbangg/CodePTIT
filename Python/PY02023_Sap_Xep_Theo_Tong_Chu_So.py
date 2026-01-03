def sum_digit(x):
    return sum(int(c) for c in str(x))

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(key=lambda x: (sum_digit(x), x))
    print(*a)
