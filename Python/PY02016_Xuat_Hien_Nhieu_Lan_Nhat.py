for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    cand, cnt = None, 0
    for item in a:
        if cnt == 0:
            cand, cnt = item, 1
        elif item != cand:
            cnt -= 1
        else:
            cnt += 1
    print(cand if a.count(cand) > n / 2 else "NO")
