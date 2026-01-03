def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

for _ in range(int(input())):
    s = input()
    l = len(s)
    cnt = sum(isPrime(int(ch)) for ch in s)
    print("YES" if isPrime(l) and cnt > l - cnt else "NO")
