s = input()
f = [0] * 15

def Try(tmp):
    if len(tmp) == len(s):
        print(tmp)
        return
    for i in range(len(s)):
        if f[i] == 0:
            f[i] = 1
            Try(tmp + s[i])
            f[i] = 0

Try('')