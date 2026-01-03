import re
print(*sorted(list(map(int, set(re.findall('\d\d', input()))))))