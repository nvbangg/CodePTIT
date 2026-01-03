p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while True:
    line = input()
    if line == "0":
        break
    k, s = line.split()
    k = int(k)
    print("".join(p[(p.find(ch) + k) % 28] for ch in s)[::-1])
