def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

def check(s):
    if any(i % 2 != int(s[i]) % 2 for i in range(len(s))):
        return False
    return True if isPrime(sum(map(int, s))) else False

for _ in range(int(input())):
    print("YES" if check(input()) else "NO")
