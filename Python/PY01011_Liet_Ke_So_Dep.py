def check(s):
    if len(s) % 2 != 0:  #! sửa đề thành chiều dài là lẻ
        return False
    for ch in s:
        if int(ch) % 2 != 0:
            return False
    return True if s == s[::-1] else False


for _ in range(int(input())):
    n = int(input())
    print(*[i for i in range(22, n, 2) if check(str(i))])
