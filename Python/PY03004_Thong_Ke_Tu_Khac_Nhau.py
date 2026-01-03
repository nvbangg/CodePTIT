import re

n = int(input())
freq = {}

for _ in range(n):
    line = input().strip().lower()
    for w in re.findall(r'[a-z0-9]+', line):
        freq[w] = freq.get(w, 0) + 1

for w, cnt in sorted(freq.items(), key=lambda x: (-x[1], x[0])):
    print(w, cnt)
