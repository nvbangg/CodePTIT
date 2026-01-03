for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = set(a[:n - 1])
    c = set(a[1:])
    if a[0] != a[n - 1]:
        if len(set(a)) == n:
            print("YES")
        else:
            print("NO")
    else:
        if len(b) == len(c) and len(b) == n - 1:
            print("YES")
        else:
            print("NO")