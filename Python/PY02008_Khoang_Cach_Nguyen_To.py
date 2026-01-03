# Sàng số nguyên tố
isPrime = [True] * 10**6
isPrime[0] = isPrime[1] = False
for i in range(2, 10**3):
    if isPrime[i]:
        for j in range(i * i, 10**6, i):
            isPrime[j] = False

prime = []
for i in range(10**6):
    if isPrime[i]:
        prime.append(i)

n, x = map(int, input().split())
cur = x
print(cur, end=" ")
for i in range(n):
    cur += prime[i]
    print(cur, end=" ")
