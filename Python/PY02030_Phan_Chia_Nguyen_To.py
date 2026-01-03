def is_prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return n > 1

n = int(input())
a = list(map(int, input().split()))
res = []
seen = set()

for i in a:
    if i not in seen:
        seen.add(i)
        res.append(i)

total = sum(res)
ok = False

for i in range(len(res)):
    tmp = sum(res[:i + 1])
    if is_prime(tmp) and is_prime(total - tmp):
        print(i)
        ok = True
        break

if not ok:
    print("NOT FOUND")