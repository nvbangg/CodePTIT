for _ in range(int(input())):
    n, c, d = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    sum_c_rich = sum(a[0:c])
    sum_d_poor = sum(a[c:c + d])
    score1 = (sum_c_rich / c) + (sum_d_poor / d)

    sum_d_rich = sum(a[0:d])
    sum_c_poor = sum(a[d:d + c])
    score2 = (sum_d_rich / d) + (sum_c_poor / c)

    print(f"{max(score1, score2):.6f}")