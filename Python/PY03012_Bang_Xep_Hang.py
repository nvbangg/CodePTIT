n = int(input())
a = []
for _ in range(n):
    s = input()
    c, t = map(int, input().split())
    a.append((s, c, t))
a.sort(key = lambda item : (-item[1], item[2], item[0]))
for item in a:
    print(*item)
    