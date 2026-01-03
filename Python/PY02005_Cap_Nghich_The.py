n = int(input())
a = list(map(int, input().split()))
print(sum(1 for i in range(n-1) for j in range(i+1, n) if a[i] > a[j]))
