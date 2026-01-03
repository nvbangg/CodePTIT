def solve():
    n = int(input())
    if n == 0:
        print(0)
        return

    pairs = []
    for _ in range(n):
        a, b = map(float, input().split())
        pairs.append((a, b))
    dp = [1] * n

    for i in range(1, n):
        for j in range(i):
            if pairs[j][0] < pairs[i][0] and pairs[j][1] > pairs[i][1]:
                dp[i] = max(dp[i], 1 + dp[j])

    print(max(dp))

for _ in range(int(input())):
    solve()