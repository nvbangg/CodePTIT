import array

a = array.array("i", [0] * 10)


def init():
    a[0] = 1
    for i in range(1, 10):
        a[i] = i * a[i - 1]


def calsum(n):
    total = 0
    tmp = n
    while n:
        du = n % 10
        total += a[du]
        n //= 10
    return total == tmp


if __name__ == "__main__":
    init()
    t = int(input())
    while t:
        num = int(input())
        if calsum(num):
            print("Yes")
        else:
            print("No")
        t -= 1
