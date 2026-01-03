import sys

MOD = 10**9 + 7

def sieve(n):
    is_prime = [True]*(n+1)
    is_prime[0:2] = [False, False]
    for p in range(2, int(n**0.5)+1):
        if is_prime[p]:
            step = p
            start = p*p
            is_prime[start:n+1:step] = [False]*(((n - start)//step) + 1)
    return [i for i, v in enumerate(is_prime) if v]

def vp_fact(n, p):
    e = 0
    pp = p
    while pp <= n:
        e += n // pp
        pp *= p
    return e

def count_pairs(a, b, primes):
    ans = 1
    a1 = a - 1
    for p in primes:
        if p > b:
            break
        e = 0
        pp = p
        while pp <= b:
            e += b // pp - (a1 // pp)
            pp *= p
        ans = (ans * (2*e + 1)) % MOD
    return ans

def main():
    data = list(map(int, sys.stdin.read().strip().split()))
    if not data:
        return
    t = data[0]
    pairs = data[1:]
    tests = [(pairs[i], pairs[i+1]) for i in range(0, 2*t, 2)]
    max_b = max(b for _, b in tests)
    primes = sieve(max_b)

    out = []
    for a, b in tests:
        out.append(str(count_pairs(a, b, primes)))
    print("\n".join(out))

if __name__ == "__main__":
    main()
