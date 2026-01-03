def check(a):
    return len(a) == 4 and all(item.isdigit() and 0 <= int(item) <= 255 for item in a)

for _ in range(int(input())):
    print("YES" if check(input().split(".")) else "NO")
