n = int(input())
a = list(map(int, input().split()))
res = []
for item in a:
    res.pop() if res and (res[-1] + item) % 2 == 0 else res.append(item)
print(len(res))
