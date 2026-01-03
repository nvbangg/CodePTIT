# PYKT037_Doi_Co_So
# ICPC0106_Doi_Co_So_2

f = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for _ in range(int(input())):
    n, b = map(int, input().split())
    s = ""
    while n:
        n, x = divmod(n, b)
        s = f[x] + s
    print(s or "0")
