ranges = [ (3, 4, 2.5), (5, 6, 3.0), (7, 9, 3.5), (10, 12, 4.0), (13, 15, 4.5), (16, 19, 5.0), (20, 22, 5.5),
           (23, 26, 6.0), (27, 29, 6.5), (30, 32, 7.0), (33, 34, 7.5), (35, 36, 8.0), (37, 38, 8.5), (39, 40, 9.0) ]
def get_point(x):
    for low, high, value in ranges:
        if low <= int(x) <= high:
            return value

for _ in range(int(input())):
    rea, lis, spe, wri = map(float, input().split())
    rea = get_point(rea)
    lis = get_point(lis)
    res = (rea + lis + spe + wri) / 4
    if res % 1 < 0.25:
        res = int(res) + 0.0
    elif res % 1 > 0.75:
        res = int(res) + 1.0
    else:
        res = int(res) + 0.5
    print(res)