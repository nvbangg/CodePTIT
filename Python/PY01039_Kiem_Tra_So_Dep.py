def check(s):
    return all(s[i] == s[i - 2] for i in range(2, len(s)))

for _ in range(int(input())):
    print("YES" if check(input()) else "NO")
