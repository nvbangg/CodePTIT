def count_digits(n):
    if n == 0:
        return [0] * 10
    s = str(n)
    length = len(s)
    count = [0] * 10
    for i in range(length):
        left = int(s[:i]) if i > 0 else 0
        curr = int(s[i])
        right = int(s[i + 1:]) if i < length - 1 else 0
        power = 10 ** (length - i - 1)
        for d in range(10):
            if d < curr:
                count[d] += (left + 1) * power
            elif d == curr:
                count[d] += left * power + right + 1
            else:
                count[d] += left * power
        count[0] -= power
    return count

for _ in range(int(input())):
    A, B = map(int, input().split())
    count_B = count_digits(B)
    count_A = count_digits(A - 1) if A > 1 else [0] * 10
    result = [b - a for a, b in zip(count_A, count_B)]
    print(*result)
