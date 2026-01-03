n = int(input())
list = [int(i) for i in input().split()]
m = max(list)
res, cnt = 0, 0
for i in list:
    if i == m:
        cnt += 1
    else:
        res = max(cnt, res)
        cnt = 0
print(max(res, cnt))