n = int(input())
a = []
while len(a) < n:
    a.extend(map(int, input().split()))

max_num = max(a)
res = []
for _ in range(1, max_num + 1):
    if _ not in a:
        res.append(_)
if len(res):
    for _ in res:
        print(_)
else:
    print('Excellent!')