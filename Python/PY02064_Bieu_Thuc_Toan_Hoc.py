import sys


def solve():
    n, k = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    if k == 0:
        print(0)
        return
    num_elements_to_choose = 5 * k
    NEG_INF = -float("inf")
    dp = [[NEG_INF] * (num_elements_to_choose + 1) for _ in range(n)]
    coeffs = [1, -2, 3, -4, 5]
    for i in range(n):
        dp[i][1] = a[i] * coeffs[0]
    for j in range(2, num_elements_to_choose + 1):
        coeff = coeffs[(j - 1) % 5]
        max_prev_col = NEG_INF
        for i in range(j - 1, n):
            max_prev_col = max(max_prev_col, dp[i - 1][j - 1])
            if max_prev_col != NEG_INF:
                dp[i][j] = a[i] * coeff + max_prev_col

    final_answer = NEG_INF
    for i in range(num_elements_to_choose - 1, n):
        final_answer = max(final_answer, dp[i][num_elements_to_choose])

    print(final_answer)


def main():
    num_tests = int(sys.stdin.readline())
    for _ in range(num_tests):
        solve()


if __name__ == "__main__":
    main()
