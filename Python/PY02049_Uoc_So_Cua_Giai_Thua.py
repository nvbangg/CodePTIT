for _ in range(int(input())):
    n, p = map(int, input().split())
    ans = 0
    while n:
        n //= p
        ans += n
    print(ans)
