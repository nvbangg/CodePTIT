n = int(input())
b = [list(map(int, input().split())) for _ in range(n)]
a = [0] * n

if n == 2:
    a[0] = 1
    a[1] = b[0][1] - a[0]
else:
    a[0] = (b[0][1] + b[0][2] - b[1][2]) // 2
    for i in range(1, n):
        a[i] = b[0][i] - a[0]

print(*a)
