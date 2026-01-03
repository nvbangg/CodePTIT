for _ in range(int(input())):
    s = input()
    res = ""
    cnt = 1
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            cnt += 1
        else:
            res += str(cnt) + s[i-1]
            cnt = 1
    res += str(cnt) + s[-1]
    print(res)
