s = input()
cnt1 = cnt2 = 0
for ch in s:
    if ch.isupper():
        cnt1 += 1
    else:
        cnt2 += 1
print(s.upper() if cnt1 > cnt2 else s.lower())
