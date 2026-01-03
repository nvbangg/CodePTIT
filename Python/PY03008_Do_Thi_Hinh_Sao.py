n = int(input())
deg = [0] * (n + 1)
for _ in range(n - 1):
    u, v = map(int, input().split())
    deg[u] += 1
    deg[v] += 1

print("Yes" if any(item == n - 1 for item in deg) else "No")
