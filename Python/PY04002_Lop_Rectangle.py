import sys


class Rectangle:
    def __init__(self, w, h, c):
        self.w = w
        self.h = h
        self.c = c

    def perimeter(self):
        return (self.w + self.h) * 2

    def area(self):
        return self.w * self.h

    def color(self):
        return self.c.capitalize()


arr = input().split()
r = Rectangle(int(arr[0]), int(arr[1]), arr[2])
if r.perimeter() > 0 and r.area():
    print("{} {} {}".format(r.perimeter(), r.area(), r.color()))
else:
    print("INVALID")
sys.exit()

if __name__ == "__main__":
    arr = input().split()
    r = Rectangle(int(arr[0]), int(arr[1]), int(arr[2]))
    print("{} {} {}".format(r.perimeter(), r.area(), r.color()))
