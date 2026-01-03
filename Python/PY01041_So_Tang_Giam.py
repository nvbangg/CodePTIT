def check(s):
    if len(s) < 3:
        return False
    p1 = 1
    while p1 < len(s) and s[p1] > s[p1 - 1]:
        p1 += 1
    p2 = len(s) - 2
    while p2 >= 0 and s[p2] > s[p2 + 1]:
        p2 -= 1
    return p1 == p2 + 2

for _ in range(int(input())):
    print("YES" if check(input()) else "NO")
