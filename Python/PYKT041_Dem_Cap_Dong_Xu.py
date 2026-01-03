n = int(input())
a = [input().strip() for _ in range(n)]
cnt = 0

for row, col in zip(a, zip(*a)):
    cnt_row = row.count('C')
    cnt_col = col.count('C')
    cnt += cnt_row * (cnt_row - 1) // 2
    cnt += cnt_col * (cnt_col - 1) // 2

print(cnt)