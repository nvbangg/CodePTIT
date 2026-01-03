for _ in range(int(input())):
    a = list(map(int, input()))
    for i in range(len(a)-1, 0, -1):
        if a[i] >= 5:
            a[i-1] += 1
        a[i] = 0
    print(''.join(map(str, a)))
