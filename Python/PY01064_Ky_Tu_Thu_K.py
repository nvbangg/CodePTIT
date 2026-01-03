def Find(n, k):
    if k == (1 << (n - 1)):
        return n + ord('A') - 1
    elif k < (1 << (n - 1)):
        return Find(n - 1, k)
    else:
        return Find(n - 1, (1 << n) - k)

for _ in range(int(input())):
    n ,k = map(int, input().split())
    if (k & 1):
        print('A')
    else:    
        print(chr(Find(n, k)))