def Try(st, path):
    if len(path) == k:
        print(' '.join(path))
        return
    for i in range(st, len(v)):
        Try(i + 1, path + [v[i]])

n, k = map(int, input().split())
v = sorted(set(input().split()))

Try(0, [])