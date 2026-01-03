def is_prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return n > 1

n = int(input())
a = list(map(int, input().split()))

prime_idx = [i for i in range(n) if is_prime(a[i])]
prime_sorted = sorted([a[i] for i in prime_idx])

for idx, val in zip(prime_idx, prime_sorted):
    a[idx] = val

print(*a)