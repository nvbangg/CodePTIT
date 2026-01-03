se = set()
for i in range(60):
    for j in range(38):
        for k in range(26):
            se.add((2**i)*(3**j)*(5**k))
a = sorted(se)
dic = {item : i + 1 for i, item in enumerate(a)}

for _ in range(int(input())):
    n = int(input())
    print(dic[n] if n in dic else "Not in sequence")