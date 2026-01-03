# PY01047_Kiem_Tra_Nguyen_To
# PY01058_Doan_Cuoi_Nguyen_To
def isPrime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))

for _ in range(int(input())):
    print("YES" if isPrime(int(input()[-4:])) else "NO")