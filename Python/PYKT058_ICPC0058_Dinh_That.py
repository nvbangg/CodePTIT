def check(n, k, u, v, dsKe):
    visited = [False] * (n + 1)
    stack = [u]
    visited[u] = True
    while stack:
        top = stack.pop()
        if top == v:
            return False
        for item in dsKe[top]:
            if not visited[item] and item != k:
                visited[item] = True
                stack.append(item)
    return True

for _ in range(int(input())):
    n, m, u, v = map(int, input().split())
    dsKe = [[] for _ in range(n + 1)]
    for _ in range(m):
        x, y = map(int, input().split())
        dsKe[x].append(y)
    print(sum(check(n, i, u, v, dsKe) for i in range(1, n + 1) if i not in (u, v)))
