import math
for _ in range(int(input())):
    s = input()
    print("YES" if math.gcd(int(s), int(s[::-1])) == 1 else "NO")
