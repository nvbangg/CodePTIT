for _ in range(int(input())):
    s1 = list(input())
    s2 = list(input())
    s1.sort()
    s2.sort()
    print(f"Test {_ + 1}: " "YES" if s1 == s2 else f"Test {_ + 1}: " "NO")