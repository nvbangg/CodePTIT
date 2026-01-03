for _ in range(int(input())):
    s = input().strip()
    if len(s) <= 100:
        print(s)
    else:
        idx = 98
        while s[idx] != " ":
            idx -= 1
        print(s[:idx])
