n = int(input())
a = list(map(int, input().split()))
k = min(a)
b = []
ok = 0
for i in range(1, k + 1):
    if len(b) == n:
        break
    for j in range(n):
        h = k // i
        if a[j] // (a[j] // h) != h:
            b = []
            break
        else:
            r = a[j] // ((k // i) + 1) + 1
            b.append(r)
print(sum(b))
