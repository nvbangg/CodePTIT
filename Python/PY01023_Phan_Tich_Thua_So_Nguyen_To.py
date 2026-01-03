for _ in range(int(input())):
    n = int(input())
    res = ["1"]
    for i in range(2, int(n**0.5) + 1):
        cnt = 0
        while n % i == 0:
            cnt += 1
            n //= i
        if cnt:
            res.append(f"{i}^{cnt}")
    if n > 1:
        res.append(f"{n}^1")
    print(" * ".join(res))