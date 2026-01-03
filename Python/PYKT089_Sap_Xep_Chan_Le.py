n = int(input())
a = []
if len(a) < n:
    while len(a) < n:
        k = input().split()
        for num in k:
            a.append(int(num))
chan = sorted([x for x in a if x % 2 == 0])
le = sorted([x for x in a if x & 1], reverse=True)
chan_idx, le_idx = 0, 0
for i in range(n):
    if a[i] % 2 == 0:
        a[i] = chan[chan_idx]
        chan_idx += 1
    else:
        a[i] = le[le_idx]
        le_idx += 1
print(*a)
