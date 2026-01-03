import math

def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

for _ in range(int(input())):
    n = int(input())
    cnt = sum(1 for i in range(n) if math.gcd(n, i) == 1)
    print("YES" if isPrime(cnt) else "NO")
