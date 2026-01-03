n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
max_num = -1
max_list = max([x for row in a for x in row])
min_list = min([x for row in a for x in row])
gap = max_list - min_list
lucky_list = [x for row in a for x in row if x == gap]

if len(lucky_list):
    max_num = max(lucky_list)
    print(max_num)
    for i in range(0, n):
        for j in range(0, m):
            if a[i][j] == max_num:
                print(f"Vi tri [{i}][{j}]")
else:
    print("NOT FOUND")