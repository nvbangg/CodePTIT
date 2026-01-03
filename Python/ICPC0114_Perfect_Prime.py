def isPrime(n):
    return n > 1 and all(n % i for i in range(int(n**0.5) + 1))

def check(n):
    pass

for _ in range(int(input())):
    n = int(input())
    print("Yes" if check(n) else "No")
