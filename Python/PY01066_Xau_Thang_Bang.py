# PY01019_Khoang_Cach_Ky_Tu 
# PY01066_Xau_Thang_Bang
def check(s):
    return all(abs(ord(s[i]) - ord(s[i-1])) == abs(ord(s[~i]) - ord(s[~(i-1)])) for i in range(1, len(s)))
#! ~i = -(i+1)  => để truy cập chỉ số chuỗi từ cuối
for _ in range(int(input())):
    print('YES' if check(input()) else 'NO')