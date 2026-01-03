t = int(input())
for _ in range(t):
    n, m, l = map(int, input().split())
    a = [list(map(int, input().split())) for _ in range(n)]
    w = m - l + 1
    h = n - l + 1

    row_sum = [[0] * w for _ in range(n)]
    for i in range(n):
        s = sum(a[i][0:l])
        row_sum[i][0] = s
        for j in range(1, w):
            s += a[i][j + l - 1] - a[i][j - 1]
            row_sum[i][j] = s

    col_sum = [0] * w
    for i in range(l):
        for j in range(w):
            col_sum[j] += row_sum[i][j]

    area = l * l
    for i in range(h):
        print(" ".join(str(col_sum[j] // area) for j in range(w)))
        if i + l < n:
            for j in range(w):
                col_sum[j] += row_sum[i + l][j] - row_sum[i][j]
