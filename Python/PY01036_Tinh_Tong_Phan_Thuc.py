for _ in range(int(input())):
    n = int(input())
    total = 0
    start = 1
    if n % 2 == 0:
        start = 2
    for i in range(start, n + 1, 2):
        total += 1 / i
    print(f"{total:.6f}")
