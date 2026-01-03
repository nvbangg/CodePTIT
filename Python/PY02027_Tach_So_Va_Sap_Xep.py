import re

n = int(input())
nums = []

for _ in range(n):
    s = input()
    nums += [int(x) for x in re.findall(r'\d+', s)]

for x in sorted(nums):
    print(x)
