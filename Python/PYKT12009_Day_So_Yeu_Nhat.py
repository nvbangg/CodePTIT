from sys import stdin, stdout

n = int(stdin.readline())
a = list(map(float, stdin.readline().split()))
def kadane(x):
    pos_sum, max_sum, neg_sum, min_sum = 0.0, 0.0, 0.0, 0.0
    for i in a:
        pos_sum += i - x
        neg_sum += i - x

        if pos_sum > 0.0:
            if pos_sum > max_sum:
                max_sum = pos_sum
        else:
            pos_sum = 0.0

        if neg_sum < 0.0:
            if neg_sum < min_sum:
                min_sum = neg_sum
        else:
            neg_sum = 0.0

    return round(max_sum, 6), round(-min_sum, 6)


pos, neg = 1.0, -1.0
l, r = min(a), max(a)

while pos != neg:
    m = (l + r) / 2
    pos, neg = kadane(m)
    if pos > neg:
        l = m
    else:
        r = m

stdout.write("%.6f" % (pos))