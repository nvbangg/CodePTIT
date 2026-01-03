import re
n = int(input())

fre = {}

for _ in range(n):
    line = input().lower().strip()
    for w in re.findall(r'[a-z]+', line):
        fre[w] = fre.get(w, 0) + 1

for w, cnt in sorted(fre.items(), key=lambda x: (-x[1], x[0])):
    print(w, cnt)