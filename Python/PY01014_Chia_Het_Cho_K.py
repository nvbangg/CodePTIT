a, k, n = map(int, input().split())
du = k - a % k
res = list(range(du, n - a + 1, k))
print(*res if res else [-1])
