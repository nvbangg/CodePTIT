import re
n, k = map(int, input().split())
fre = {}

for _ in range(n):
    line = input().lower().strip()
    for w in re.findall(r'[a-z0-9]+', line):
        fre[w] = fre.get(w, 0) + 1

for w, cnt in sorted(fre.items(), key=lambda x: (-x[1], x[0])):
    if cnt >= k:
        print(w, cnt)