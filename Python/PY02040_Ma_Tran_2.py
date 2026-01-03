n = int(input())

a = []

for i in range(n):
    a.append(list(map(int, input().split())))
sumOfUpHalf = 0
sumOfDownHalf = 0
k = int(input())
for i in range(n):
    for j in range(n):
        if j < n - i - 1:
            sumOfUpHalf += a[i][j]
        elif j > n - i - 1:
            sumOfDownHalf += a[i][j]
if abs(sumOfUpHalf - sumOfDownHalf) <= k:
    print(f"YES\n{abs(sumOfUpHalf - sumOfDownHalf)}")
else:
    print(f"NO\n{abs(sumOfUpHalf - sumOfDownHalf)}")
