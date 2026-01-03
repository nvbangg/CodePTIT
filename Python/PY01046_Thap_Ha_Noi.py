def ThapHaNoi(n, cot_nguon, cot_trung_gian, cot_dich):
    if n == 1:
        print(f"{cot_nguon} -> {cot_dich}")
        return
    ThapHaNoi(n - 1, cot_nguon, cot_dich, cot_trung_gian)
    print(f"{cot_nguon} -> {cot_dich}")
    ThapHaNoi(n - 1, cot_trung_gian, cot_nguon, cot_dich)


n = int(input())
ThapHaNoi(n, "A", "B", "C")
