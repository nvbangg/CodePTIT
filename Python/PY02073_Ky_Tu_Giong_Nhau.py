for _ in range(int(input())):
    n = int(input())
    x, y, z = map(int, input().split())
    dp = [1e9] * (n + 2)
    dp[1] = x
    for i in range(2, n + 1):
        if i & 1 ^ 1:
            dp[i] = min(dp[i >> 1] + z, dp[i - 1] + x)
        else:
            dp[i] = min(dp[(i - 1) >> 1] + z + x, dp[(i + 1) >> 1] + z + y, dp[i - 1] + x)
    print(dp[n])