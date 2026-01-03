n = int(input())
a = []

while len(a) < n:
    a.extend(map(int, input().split()))

even = sorted([x for x in a if x % 2 == 0])
odd = sorted([x for x in a if x & 1], reverse = True)

ei = oi = 0
res = []

for x in a:
    if x % 2 == 0:
        res.append(even[ei])
        ei += 1
    else:
        res.append(odd[oi])
        oi += 1

print(*res)