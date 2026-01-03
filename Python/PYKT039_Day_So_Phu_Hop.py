def is_suitable_array(a, b):
    for num1, num2 in zip(sorted(a), sorted(b)):
        if num1 > num2:
            return False
    return True


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    print("YES" if is_suitable_array(a, b) else "NO")
