from math import gcd

for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    a = [0] * (len(s) + 1)
    if "1" not in s:
        print("0/1")
    else:
        xs = 0
        for i in range(1, n + 1):
            a[i] += a[i - 1] + (s[i - 1] == "1")

        for i in range(1, n + 1):
            if s[i - 1] == "1":
                xs += (
                    2 * (a[i] - 1) + 1 if i <= k else 2 * (a[i] - a[i - k - 1] - 1) + 1
                )
        print(f"{xs // gcd(xs, n * n)}/{(n * n) // gcd(xs, n * n)}")
