for _ in range(int(input())):
    n, m = map(int, input().split())
    a = []
    b = []
    ans = 0
    for i in range(n):
        a.append(list(map(int, input().split())))
    for i in range(3):
        b.append(list(map(int, input().split())))
    for i in range(n - 2):
        for j in range(m - 2):
            ans += sum((a[i + k][j + z] * b[k][z] for k in range(3) for z in range(3)))
    print(ans)