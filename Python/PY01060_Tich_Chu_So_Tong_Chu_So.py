from math import prod

for _ in range(int(input())):
    s = input()
    odd_sum = sum(int(s[i]) for i in range(1, len(s), 2))
    even = [int(s[i]) for i in range(0, len(s), 2) if s[i] != "0"]
    even_prod = prod(even) if even else 0
    print(even_prod, odd_sum)
