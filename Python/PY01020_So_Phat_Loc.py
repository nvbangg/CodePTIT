for _ in range(int(input())):
    s = input()
    print("YES" if len(s) >= 2 and s[-2:] == "86" else "NO")