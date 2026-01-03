for _ in range(int(input())):
    n, d = map(int, input().split())
    a = input().split()
    print(*(a[d:] + a[:d]))
