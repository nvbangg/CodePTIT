for _ in range(int(input())):
    s = input()
    print("YES" if all(int(s[i]) <= int(s[i + 1]) for i in range(len(s) - 1)) else "NO")
