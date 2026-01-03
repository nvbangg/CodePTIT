def tn(n):
    return str(n) == str(n)[::-1] and len(str(n)) > 1

n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
max_num = -1
tn_li = [x for row in a for x in row if tn(x)]

if len(tn_li):
    max_num = max(tn_li)
    print(max_num)
    for i in range(0, n):
        for j in range(0, m):
            if a[i][j] == max_num:
                print(f"Vi tri [{i}][{j}]")
else:
    print("NOT FOUND")