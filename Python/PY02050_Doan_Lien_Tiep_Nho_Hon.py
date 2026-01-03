for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = []
    for i in range(0, n):
        while len(b) and a[i] >= a[b[-1]]:
            b.pop()
        print(i - b[-1] if len(b) else i + 1, end=' ')
        b.append(i)
    print()