n = int(input())
stack = []
res = 0
for i in range(n):
    x = int(input())
    cnt = 1
    while len(stack) and x >= stack[-1][0]:
        res += stack[-1][1]
        if x == stack[-1][0]:
            cnt += stack[-1][1]
        stack.pop()
    if len(stack):
        res += 1
    stack.append((x, cnt))
print(res)