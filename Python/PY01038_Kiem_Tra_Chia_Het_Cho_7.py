for _ in range(int(input())):
    n = int(input())
    for _ in range(1000):
        if n % 7 == 0:
            break
        n += int(str(n)[::-1])
    print(n if n % 7 == 0 else -1)
