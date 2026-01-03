for _ in range(int(input())):
    print("YES" if all(ch in "47" for ch in input()) else "NO")