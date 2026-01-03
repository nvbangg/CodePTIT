import re
n = int(input())
s = "".join(str(len(input().split())) for _ in range(n))
tmp = re.sub(r"(68)+", "1", s)
res = re.sub(r"7777", "2", tmp)
print(len(res))
print('\n'.join(res))