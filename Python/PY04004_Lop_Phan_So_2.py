import math


class PhanSo:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau

    def rutGon(self):
        ucln = math.gcd(self.tu, self.mau)
        self.tu = int(self.tu / ucln)
        self.mau = int(self.mau / ucln)

    def tong(self, other):
        tu = self.tu * other.mau + other.tu * self.mau
        mau = self.mau * other.mau
        res = PhanSo(tu, mau)
        res.rutGon()
        return res


a, b, c, d = map(int, input().split())
p, q = PhanSo(a, b), PhanSo(c, d)
res = p.tong(q)
print(f"{res.tu}/{res.mau}")
