import re
from collections import Counter

a = Counter(list(map(int, re.findall('\d\d', input()))))

print('\n'.join([f"{x} {a[x]}" for x in a.keys()]))