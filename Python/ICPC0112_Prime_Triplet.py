# Sàng số nguyên tố
isPrime = [True] * 10**6
isPrime[0] = isPrime[1] = False
for i in range(2, 10**3):
    if isPrime[i]:
        for j in range(i * i, 10**6, i):
            isPrime[j] = False

for _ in range(int(input())):
    n = int(input())
    cnt = 0
    for i in range(2, n - 5):
        if isPrime[i] and isPrime[i + 6] and (isPrime[i + 2] or isPrime[i + 4]):
            cnt += 1
    print(cnt)
