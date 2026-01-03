for _ in range(int(input())):
    s = input()
    print(''.join(s[i] * int(s[i+1]) for i in range(0, len(s), 2)))