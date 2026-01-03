n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = list(map(lambda x, y: x - y, a, b))

coupoun = list(zip(a, b, c))
coupoun.sort(key=lambda x: (x[2], -x[1]))
before, after = 0, 0

for i in range(k):
    before += coupoun[i][0]

for i in range(k, n):
    after += coupoun[i][1]

print(before + after)