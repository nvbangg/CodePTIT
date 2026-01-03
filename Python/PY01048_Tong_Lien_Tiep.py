for _ in range(int(input())):
    n = int(input())
    cnt = 0
    k = 2
    while k * (k - 1) // 2 < n:
        if (n - k * (k - 1) // 2) % k == 0:
            cnt += 1
        k += 1
    print(cnt)