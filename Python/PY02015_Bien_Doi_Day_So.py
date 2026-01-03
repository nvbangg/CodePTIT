while True:
    a = list(map(int, input().split()))
    if a == [0, 0, 0, 0]:
        break
    cnt = 0
    while len(set(a)) != 1:
        a = [abs(a[i] - a[(i + 1) % 4]) for i in range(4)]
        cnt += 1
    print(cnt)
