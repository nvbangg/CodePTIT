for _ in range(int(input())):
    print("YES" if sum(map(int, input())) % 3 == 0 else "NO")
