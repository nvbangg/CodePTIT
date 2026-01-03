def check(s):
    return len(s) % 2 == 0 and s == s[::-1] and all(int(ch) % 2 == 0 for ch in s)

for _ in range(int(input())):
    n = int(input())
    print(*[i for i in range(22, n, 2) if check(str(i))])
