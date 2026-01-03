
for _ in range(int(input())):
    n = int(input())
    a = 15 * [0]
    ans = []
    def Try(i, st, sum = 0):
        if sum == n:
            res = a[1:i]
            s = "(" + " ".join(map(str, res)) + ")"
            ans.append(s)
        for j in range(st, 0, -1):
            a[i] = j
            if sum + a[i] <= n:
                Try(i + 1, j, sum + a[i])
    Try(1, n)
    print(len(ans))
    print(*ans)