n = int(input())
a = list(map(int, input().split()))
a.sort()
a.append(40000)
for i in range(len(a) - 1):
    if a[i + 1] - a[i] > 1:
        print(a[i] + 1)
        break
