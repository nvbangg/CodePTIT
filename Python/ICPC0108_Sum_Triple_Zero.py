for _ in range(int(input())):
    n = int(input())
    a = sorted(map(int, input().split()))
    res = 0
    for i in range(n - 2):
        left, right = i + 1, n - 1
        while left < right:
            s = a[i] + a[left] + a[right]
            if s == 0:
                res += 1
                left += 1
            elif s < 0:
                left += 1
            else:
                right -= 1
    print(res)
