def isPrime(n):
    return n>1 and all(n%i for i in range(2, int(n**0.5)+1))

n, m = map(int, input().split())
for _ in range(n):
    line = [int(isPrime(int(item))) for item in input().split()] 
    print(*line)