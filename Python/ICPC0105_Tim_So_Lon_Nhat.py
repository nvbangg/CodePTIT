for _ in range(int(input())):
    s = input() + "z"  # để đảm bảo ký tự cuối được xử lý
    res, num = -1, 0 
    for i, ch in enumerate(s):
        if ch.isdigit():
            num = num * 10 + int(ch)
        else:
            if i > 0 and s[i - 1].isdigit():
                res = max(res, num) 
            num = 0
    print(res)