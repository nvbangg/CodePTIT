isPrime = [False] * 10005

def init():
    isPrime[0] = isPrime[1] = True
    for i in range(2, int(len(isPrime)**0.5) + 1):
        if not isPrime[i]:
            for j in range(i * i, len(isPrime), i):
                isPrime[j] = True

def calc(x):
    if not isPrime[x]:
        return 0
    low = x - 1
    high = x + 1
    while True:
        if low >= 2 and not isPrime[low]:
            return x - low
        if high < len(isPrime) and not isPrime[high]:
            return high - x
        low -= 1
        high += 1

init()

n = int(input())
array = list(map(int, input().split()))
print(max(calc(x) for x in array))
