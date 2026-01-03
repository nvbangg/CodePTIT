s = input()
res = ""
for i, ch in enumerate(s[::-1], 1):
    res = ch + res
    if i % 3 == 0 and i != len(s):
        res = ',' + res
print(res)
