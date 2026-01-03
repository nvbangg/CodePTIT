def ints_gen():
    while True:
        try:
            for tok in input().split():
                yield int(tok)
        except EOFError:
            break


def solve():
    g = ints_gen()
    T = next(g)
    INF = 10**9
    out = []

    for _ in range(T):
        N = next(g)
        M = next(g)
        A = [[next(g) for _ in range(M)] for __ in range(N)]

        dp = [[INF] * M for _ in range(N)]
        dp[N - 1][M - 1] = 0

        for i in range(N - 1, -1, -1):
            for j in range(M - 1, -1, -1):
                if i == N - 1 and j == M - 1:
                    continue
                v = A[i][j]

                # xuống
                if i + 1 < N:
                    d = abs(v - A[i + 1][j])
                    if d > 0 and i + d < N:
                        dp[i][j] = min(dp[i][j], 1 + dp[i + d][j])

                # phải
                if j + 1 < M:
                    d = abs(v - A[i][j + 1])
                    if d > 0 and j + d < M:
                        dp[i][j] = min(dp[i][j], 1 + dp[i][j + d])

                # chéo xuống phải
                if i + 1 < N and j + 1 < M:
                    d = abs(v - A[i + 1][j + 1])
                    if d > 0 and i + d < N and j + d < M:
                        dp[i][j] = min(dp[i][j], 1 + dp[i + d][j + d])

        out.append(str(dp[0][0] if dp[0][0] < INF else -1))

    print("\n".join(out))


if __name__ == "__main__":
    solve()
