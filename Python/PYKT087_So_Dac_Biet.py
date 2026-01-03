MOD = int(1e9 + 7)
for _ in range(int(input())):
    n, k = map(int, input().split())
    i = 0
    result = 0
    while(k):
        if (k & 1):
            result += pow(n, i, MOD)
            result %= (MOD)
        k >>= 1
        i += 1
    print(result)