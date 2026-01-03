from sys import stdin

n = int(stdin.readline())
a = list(map(int, stdin.readline().split()))

b = [0] * len(a)
for i in range(len(a)):
    for j in range(len(a)):
        if a[i] - abs(i - j) == 0:
            b[i] = 1e9
            break
        else:
            b[i] += abs(a[j] - (a[i] - abs(i - j)))
    if b[i] == 1e9:
        continue

print(min(b))
