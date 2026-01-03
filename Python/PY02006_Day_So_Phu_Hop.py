for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    print("YES" if all(item1 <= item2 for item1, item2 in zip(sorted(a), sorted(b))) else "NO")
    