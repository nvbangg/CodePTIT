import re
a = list(map(int, re.findall(r'\d\d', input())))
print(*dict.fromkeys(a))
