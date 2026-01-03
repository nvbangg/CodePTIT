from collections import Counter

for t in range(int(input())):
    exits = False
    n, m, p = [int(i) for i in input().split()]
    arr1 = Counter([int(i) for i in input().split()])
    arr2 = Counter([int(i) for i in input().split()])
    arr3 = Counter([int(i) for i in input().split()])
    for x in arr1.keys():
        if x in arr2.keys() and x in arr3.keys():
            for i in range(min(arr1[x], min(arr2[x], arr3[x]))):
                exits = True
                print(x, end=" ")
    print("" if exits else "NO")
