from math import gcd

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = []
    while len(a) < n:
        my_list = input().split()
        for num in my_list:
            a.append(int(num))
    if k in a:
        print(1)
    else:
        ans = 1e10
        for i in range(n - 1):
            tmp = a[i]
            for j in range(i + 1, n):
                tmp = gcd(tmp, a[j])
                if tmp < k:
                    break
                elif tmp == k:
                    ans = min(ans, j - i + 1)
                    break
        print(-1 if ans == 1e10 else ans)
