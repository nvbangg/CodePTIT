for _ in range(int(input())):
    n = int(input())
    u = float(input())
    a = list(map(float, input().split()))
    a.sort(reverse=True)
    total = sum(a)
    if total + u >= n:
        print(f'{1:.6f}')
    else:
        res, i = 1, 0
        while a[i] > (total + u) / (n - i):
            res *= a[i]
            total -= a[i]
            i += 1
        res *= ((total + u) / (n - i)) ** (n - i)
        print('{1:.6f}' if res >= 1 else '{:.6f}'.format(res))