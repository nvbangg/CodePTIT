dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

m, n = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(m)]
vs = [[0] * n for _ in range(m)]

victim = 0
for i in range(m):
    for j in range(n):
        if a[i][j] == -1:
            for k in range(8):
                new_i = i + dx[k]
                new_j = j + dy[k]
                if new_i >= 0 and new_i < m and new_j >= 0 and new_j < n and not vs[new_i][new_j]:
                    vs[new_i][new_j] = 1
                    victim += a[new_i][new_j]
print(victim)