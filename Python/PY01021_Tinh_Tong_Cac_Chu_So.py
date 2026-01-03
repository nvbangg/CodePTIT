for _ in range(int(input())):
    s = input()
    ans = 0
    dd = [0] * len(s)
    i = 0
    while i < len(s):
        if s[i].isdigit():
            ans += int(s[i])
            s = s[:i] + s[i + 1:]
            i -= 1
        i += 1
    s = ''.join(sorted(s))
    print(s + str(ans))