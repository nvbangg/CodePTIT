for _ in range(int(input())):
    res = 1
    for ch in input():
        if int(ch) != 0:
            res *= int(ch)
    print(res)
