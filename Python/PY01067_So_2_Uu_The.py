ans = []

def init():
    global ans
    q = []
    q.append(('1', 0))
    q.append(('2', 1))
    ans.append('2')
    while len(q):
        s, cnt = q.pop(0)
        q.append((s + '0', cnt))
        q.append((s + '1', cnt))
        q.append((s + '2', cnt + 1)) 
        if cnt > ((len(s) + 1) >> 1):
            ans.append(s + '0')
            ans.append(s + '1')
        if cnt + 1 > ((len(s) + 1) >> 1):
            ans.append(s + '2')
        if len(ans) >= 1000:
            break

init()

for _ in range(int(input())):
    n = int(input())
    print(' '.join(ans[:n]))