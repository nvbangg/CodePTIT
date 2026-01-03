for t in range(int(input())):
    s = str(sum(map(int, input())))
    print("YES" if len(s) > 1 and s == s[::-1] else "NO")
