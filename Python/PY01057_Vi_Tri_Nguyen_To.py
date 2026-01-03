def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

def check(s):
    return "YES" if all(isPrime(i) == isPrime(int(s[i])) for i in range(len(s))) else "NO"

for _ in range(int(input())):
    print(check(input()))
