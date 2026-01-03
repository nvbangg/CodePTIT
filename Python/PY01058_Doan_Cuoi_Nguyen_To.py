# PY01047_KiemTraNguyenTo
# PY01058_DoanCuoiNguyenTo
def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

for _ in range(int(input())):
    print("YES" if isPrime(int(input()[-4:])) else "NO")