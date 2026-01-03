n, m, x = map(int, input().split())
a = [[] for _ in range(n + 1)]
for _ in range(m):
    u, v = map(int, input().split())
    a[u].append(v)
    a[v].append(u)
visited = [False] * (n + 1)
stack = [x]
visited[x] = True
while stack:
    top = stack.pop()
    for item in a[top]:
        if not visited[item]:
            stack.append(item)
            visited[item] = True
for i in range(1, n + 1):
    if not visited[i]:
        print(i)       