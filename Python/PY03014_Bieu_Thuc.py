for _ in range(int(input())):
    s = input()
    stack = []
    res = []
    idx = 0
    for ch in s:
        if ch == '(':
            idx+=1
            stack.append(idx)
            res.append(idx)
        elif ch == ')':
            top = stack.pop()
            res.append(top)
    print(*res)