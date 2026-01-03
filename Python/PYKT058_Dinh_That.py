import sys
from collections import deque

def cnt_cut(n, adj, u, v):
    def reach(ban):
        if u == ban:
            return False
        vs = [0] * (n + 1)
        q = deque([u])
        vs[u] = 1
        while q:
            tmp = q.popleft()
            for y in adj[tmp]:
                if y == ban or vs[y]:
                    continue
                vs[y] = 1
                q.append(y)
        return vs[v]
    cnt = 0
    for w in range(1, n + 1):
        if w == u or w == v:
            continue
        if not reach(w):
            cnt += 1
    return cnt

data = sys.stdin.read().split()
it = iter(data)
t = int(next(it))
out = []
for _ in range(t):
    n, m = int(next(it)), int(next(it))
    u, v = int(next(it)), int(next(it))
    adj = [[] for _ in range(n + 1)]
    for _ in range(m):
        x = int(next(it)); y = int(next(it))
        adj[x].append(y)
    out.append(str(cnt_cut(n, adj, u, v)))
sys.stdout.write('\n'.join(out))