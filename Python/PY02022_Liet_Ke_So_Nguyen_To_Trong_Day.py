def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))


n = int(input())
a = list(map(int, input().split()))
se = set()
for item in a:
    if isPrime(item) and item not in se:
        se.add(item)
        print(item, a.count(item))
