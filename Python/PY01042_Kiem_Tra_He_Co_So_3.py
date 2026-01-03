for _ in range(int(input())):
    print("YES" if all(ch in "012" for ch in input()) else "NO")
