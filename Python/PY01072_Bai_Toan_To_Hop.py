n, k = map(int, input().split())
mylist = list(map(int, input().split()))
a = []

for i in mylist:
    if i not in a:
        a.append(i)

a.sort()
b = [0] * k


def Try(i, idx):
    if i == k:
        for j in b:
            print(j, end=" ")
        print()
        return
    elif i < k:
        for j in range(idx, len(a)):
            b[i] = a[j]
            if i < k:
                Try(i + 1, j + 1)
            else:
                return


Try(0, 0)
