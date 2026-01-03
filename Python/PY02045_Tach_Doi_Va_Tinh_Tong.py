n = int(input())

while len(str(n)) > 1:
    s = str(n)
    n = int(s[:len(s) >> 1]) + int(s[len(s) >> 1:])
    print(n)