cung_hoang_dao = [
    {"ten": "Bach Duong", "ngay_bd": 21, "thang_bd": 3, "ngay_kt": 19, "thang_kt": 4},
    {"ten": "Kim Nguu", "ngay_bd": 20, "thang_bd": 4, "ngay_kt": 20, "thang_kt": 5},
    {"ten": "Song Tu", "ngay_bd": 21, "thang_bd": 5, "ngay_kt": 20, "thang_kt": 6},
    {"ten": "Cu Giai", "ngay_bd": 21, "thang_bd": 6, "ngay_kt": 22, "thang_kt": 7},
    {"ten": "Su Tu", "ngay_bd": 23, "thang_bd": 7, "ngay_kt": 22, "thang_kt": 8},
    {"ten": "Xu Nu", "ngay_bd": 23, "thang_bd": 8, "ngay_kt": 22, "thang_kt": 9},
    {"ten": "Thien Binh", "ngay_bd": 23, "thang_bd": 9, "ngay_kt": 22, "thang_kt": 10},
    {"ten": "Thien Yet", "ngay_bd": 23, "thang_bd": 10, "ngay_kt": 22, "thang_kt": 11},
    {"ten": "Nhan Ma", "ngay_bd": 23, "thang_bd": 11, "ngay_kt": 21, "thang_kt": 12},
    {"ten": "Ma Ket", "ngay_bd": 22, "thang_bd": 12, "ngay_kt": 19, "thang_kt": 1},
    {"ten": "Bao Binh", "ngay_bd": 20, "thang_bd": 1, "ngay_kt": 18, "thang_kt": 2},
    {"ten": "Song Ngu", "ngay_bd": 19, "thang_bd": 2, "ngay_kt": 20, "thang_kt": 3},
]


def tim_cung_hoang_dao(ngay, thang, data):
    for cung in data:
        if (thang == cung["thang_bd"] and ngay >= cung["ngay_bd"]) or (
            thang == cung["thang_kt"] and ngay <= cung["ngay_kt"]
        ):
            return cung["ten"]


for _ in range(int(input())):
    ngay, thang = map(int, input().split())
    print(tim_cung_hoang_dao(ngay, thang, cung_hoang_dao))
