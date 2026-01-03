n, k = map(int, input().split())

a = sorted(list(map(int, input().split())))

res = 1
start = a[0]

for x in a:
    if x - start > k:
        res += 1
    start = x

print(res)