from collections import Counter

for _ in range(int(input())):
    n = int(input())
    array = list(map(int, input().split()))
    freq = Counter(array)
    for x in array:
        if freq[x] & 1:
            print(x)
            break