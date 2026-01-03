import math


class PhanSo:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau

    def rutGon(self):
        ucln = math.gcd(self.tu, self.mau)
        self.tu = int(self.tu / ucln)
        self.mau = int(self.mau / ucln)


tu, mau = map(int, input().split())
ps = PhanSo(tu, mau)
ps.rutGon()
print(ps.tu, "/", ps.mau, sep="")
