def DFS(u, vs, graph, banned):
    if u == banned:
        return
    vs[u] = True
    for v in graph[u]:
        if not vs[v] and v != banned:
            DFS(v, vs, graph, banned)

def count_components(graph, n, banned):
    visited = [False] * (n + 1)
    count = 0
    for i in range(1, n + 1):
        if not visited[i] and i != banned:
            DFS(i, visited, graph, banned)
            count += 1
    return count

for _ in range(int(input())):
    n, m = map(int, input().split())
    graph = [[] for _ in range(n + 1)]
    for _ in range(m):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)


    base = count_components(graph, n, 0)
    max_parts = base
    res = 0
    for banned in range(1, n + 1):
        parts = count_components(graph, n, banned)
        if parts > max_parts:
            max_parts = parts
            res = banned
    print(res)