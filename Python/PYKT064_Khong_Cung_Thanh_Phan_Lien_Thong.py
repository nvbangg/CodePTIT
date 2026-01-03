n, m, x = map(int, input().split())
parent, sz = list(range(n + 1)), [1] * (n + 1)


def Find(u):
    if u == parent[u]:
        return u
    parent[u] = Find(parent[u])
    return parent[u]


def Union(u, v):
    u = Find(u)
    v = Find(v)
    if u == v:
        return False
    if sz[u] < sz[v]:
        u, v = v, u
    sz[u] += sz[v]
    parent[u] = v
    return True


for _ in range(m):
    u, v = map(int, input().split())
    Union(u, v)

x = Find(x)

ans = []
for i in range(1, n + 1):
    if Find(i) != x:
        ans.append(i)
print("\n".join(map(str, ans)))
