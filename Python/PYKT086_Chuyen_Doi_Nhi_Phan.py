from math import log2
a = []
for i in range(10):
    a.append(i)
for i in range(10, 16):
    a.append(str(chr(i + 55)))

with open("DATA.in") as file:
    for _ in range(int(file.readline().strip())):
        b = int(file.readline().strip())
        s = file.readline().strip()
        b = int(log2(b))
        x = s
        while len(s) % b:
            s = "0" + s
        ans = ""
        for i in range(0, len(s), b):
            tmp = s[i:i + b]
            tmp = tmp[::-1]
            sum = 0
            for j, num in enumerate(tmp):
                sum += (1 << j) * int(num)
            ans += str(a[sum])
        print(ans if b != 2 else x)
