import math

def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

for _ in range(int(input())):
    a, b = map(int, input().split())
    total = sum(map(int, str(math.gcd(a, b))))
    print("YES" if isPrime(total) else "NO")
