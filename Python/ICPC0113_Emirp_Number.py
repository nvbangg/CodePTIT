def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

for _ in range(int(input())):
    n = int(input())
    for i in range(n):
        r = int(str(i)[::-1])
        if i < r and r < n:
            if isPrime(i) and isPrime(r):
                print(i, r, end=" ")
    print()
