def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

for _ in range(int(input())):
    s = input()
    print("YES" if isPrime(int(s[:3])) and isPrime(int(s[-3:])) else "NO")
