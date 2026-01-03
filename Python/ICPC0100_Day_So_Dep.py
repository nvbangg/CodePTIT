from math import ceil, log2

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    cnt = 0
    for i in range(1, len(a)):
        ma, mi = max(a[i], a[i - 1]), min(a[i], a[i - 1])
        if ma > (mi << 1):
            cnt += ceil(log2(ma / mi) - 1)
    print(cnt)
