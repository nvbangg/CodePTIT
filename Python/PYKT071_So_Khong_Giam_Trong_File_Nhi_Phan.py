import pickle
import re
from collections import Counter

DATA1 = "DATA1.in"
DATA2 = "DATA2.in"

def read_int_list(path: str):
    """
    Cố gắng đọc path như pickle (list[int]); nếu lỗi, đọc văn bản và trích tất cả số nguyên.
    """
    # 1) thử pickle
    try:
        with open(path, "rb") as f:
            obj = pickle.load(f)
        if isinstance(obj, list) and all(isinstance(x, int) for x in obj):
            return obj
    except Exception:
        pass

    # 2) đọc văn bản: lấy mọi số (dấu trừ nếu có)
    with open(path, "rb") as f:
        text = f.read().decode(errors="ignore")
    return [int(x) for x in re.findall(r"-?\d+", text)]

def is_non_decreasing(x: int) -> bool:
    """Trả về True nếu x có >=2 chữ số và các chữ số từ trái sang phải không giảm."""
    if x < 10:  # cần ít nhất 2 chữ số
        return False
    prev = 10  # lớn hơn mọi chữ số
    while x > 0:
        d = x % 10
        if d > prev:  # bên trái > bên phải => giảm
            return False
        prev = d
        x //= 10
    return True

def main():
    a1 = read_int_list(DATA1)
    a2 = read_int_list(DATA2)

    c1 = Counter(x for x in a1 if is_non_decreasing(x))
    c2 = Counter(x for x in a2 if is_non_decreasing(x))

    common = sorted(set(c1) & set(c2))
    for x in common:
        print(x, c1[x], c2[x])

if __name__ == "__main__":
    main()
