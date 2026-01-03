def DFS(u, adj, vs, path):
    vs[u] = 1
    path.append(u)
    for v in adj[u]:
        if not vs[v]:
            DFS(v, adj, vs, path)

def is_full_graph(path, adj):
    cnt = 0
    for i in path:
        cnt += len(adj[i])
    return cnt == (len(path) * (len(path) - 1))

n = int(input())
m = int(input())
adj = [[] for _ in range(n + 1)]

for _ in range(m):
    u, v = map(int, input().split())
    adj[u].append(v)
    adj[v].append(u)

vs = [0] * (n + 1)
ok = 1
for i in range(1, n + 1):
    if not vs[i]:
        path = []
        DFS(i, adj, vs, path)
        if not is_full_graph(path, adj):
            ok = 0

print("YES" if ok else "NO")