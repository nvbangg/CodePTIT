n = int(input())

a = []

for i in range(n):
    a.append(list(map(int, input().split())))
sumOfUpHalf = 0
sumOfDownHalf = 0
k = int(input())
for i in range(n):
    for j in range(n):
        if i < j:
            sumOfUpHalf += a[i][j]
        elif i > j:
            sumOfDownHalf += a[i][j]
if abs(sumOfUpHalf - sumOfDownHalf) <= k:
    print(f"YES\n{abs(sumOfUpHalf - sumOfDownHalf)}")
else:
    print(f"NO\n{abs(sumOfUpHalf - sumOfDownHalf)}")
