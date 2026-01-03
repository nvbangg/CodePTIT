n = int(input())
a = list(map(int, input().split()))
print(sum(1 for i in range(len(a) - 1) if a[i] != a[i + 1]))
