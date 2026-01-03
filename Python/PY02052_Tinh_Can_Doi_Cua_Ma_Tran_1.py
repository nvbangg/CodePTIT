n = int(input())
a = [list(map(int, input().split())) for i in range(n)]

top, bottom = 0, 0
for i in range(n):
    top += sum(x for idx, x in enumerate(a[i]) if idx > i)
    bottom += sum(x for idx, x in enumerate(a[i]) if idx < i)

k = int(input())

print(f"YES\n{abs(top - bottom)}" if abs(top - bottom) <= k else f"NO\n{abs(top - bottom)}")