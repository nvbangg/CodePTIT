from collections import Counter

for _ in range(int(input())):
    n = int(input())
    freq = Counter(int(input()) for _ in range(n))
    print(max(freq, key=lambda item: (freq[item], -item)))
