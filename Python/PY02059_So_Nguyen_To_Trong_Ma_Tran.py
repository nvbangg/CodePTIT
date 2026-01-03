def nt(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return n > 1

n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
max_num = -1
prime_li = [x for row in a for x in row if nt(x)]

if len(prime_li):
    max_num = max(prime_li)
    print(max_num)
    for i in range(0, n):
        for j in range(0, m):
            if a[i][j] == max_num:
                print(f"Vi tri [{i}][{j}]")
else:
    print("NOT FOUND")