a = [str(i) for i in range(10)]

for i in range(10, 36):
    a.append(str(chr(i + 55)))

for _ in range(int(input())):
    n, b = map(int, input().split())
    k = []
    while n > 0:
        k.append(a[int(n % b)])
        n //= b
    print("".join(k)[::-1])
