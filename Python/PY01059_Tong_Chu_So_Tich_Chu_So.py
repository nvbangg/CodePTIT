from math import prod

for _ in range(int(input())):
    s = input()
    s1 = sum(int(s[i]) for i in range(0, len(s), 2))
    odd = [int(s[i]) for i in range(1, len(s), 2) if s[i] != "0"]
    s2 = prod(odd) if odd else 0
    print(s1, s2)
