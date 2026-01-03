for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    max_len = max(a) - min(a) + 1
    print(max_len - len(set(a)))