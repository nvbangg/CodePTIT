for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    a.insert(a.index(max(a)), m)
    a.sort(key=lambda x: 0 if x < 0 else 1)
    print(*a)