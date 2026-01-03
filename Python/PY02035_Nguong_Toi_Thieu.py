import re
from collections import Counter

a = Counter(re.findall('\d\d', input()))
lim = int(input())

lines = sorted([f"{x} {a[x]}" for x in a.keys() if a[x] >= lim])

if lines:
    print('\n'.join(lines))
else:
    print("NOT FOUND")