n = int(input())
grid = [input().strip() for _ in range(n)]

ans = 0

for row in grid:
    C = row.count('C')
    ans += C * (C - 1) >> 1

for col in zip(*grid):
    C = col.count('C')
    ans += C * (C - 1) >> 1

print(ans)