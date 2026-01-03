import sys

def primes_upto(n):
    is_p = [True]*(n+1)
    is_p[0:2] = [False, False]
    for i in range(2, int(n**0.5)+1):
        if is_p[i]:
            step = i
            is_p[i*i:n+1:step] = [False]*(((n - i*i)//step) + 1)
    return [i for i,v in enumerate(is_p) if v]

ALL_PRIMES = primes_upto(50)

def count_not_divisible_up_to(X, N):
    """Số lượng n ≤ X không chia hết cho bất kỳ số nào trong [2, N]."""
    if X <= 0:
        return 0
    primes = [p for p in ALL_PRIMES if p <= N]
    res = 0

    def dfs(start, prod, sign):
        nonlocal res
        for i in range(start, len(primes)):
            p = primes[i]
            new_prod = prod * p
            if new_prod > X:
                continue
            res += sign * (X // new_prod)
            dfs(i + 1, new_prod, -sign)

    dfs(0, 1, 1)
    return X - res

def solve():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    out = []
    for token in it:
        if token == "-1":
            break
        L = int(token)
        R = int(next(it))
        N = int(next(it))
        ans = count_not_divisible_up_to(R, N) - count_not_divisible_up_to(L-1, N)
        out.append(str(ans))
    print("\n".join(out))

if __name__ == "__main__":
    solve()
