import sys
sys.setrecursionlimit(10**7)

def backtrack(n, depth, perm, used, output):
    if depth == n:
        output.append(''.join(map(str, perm)))
        return
    for x in range(n, 0, -1):
        if not used[x]:
            used[x] = True
            perm[depth] = x
            backtrack(n, depth + 1, perm, used, output)
            used[x] = False

out_lines = []
for _ in range(int(input())):
    n = int(input())
    fact = 1
    for i in range(2, n+1):
        fact *= i
    out_lines.append(str(fact))
    perm = [0] * n
    used = [False] * (n + 1)
    output = []
    backtrack(n, 0, perm, used, output)
    out_lines.append(' '.join(output))
sys.stdout.write('\n'.join(out_lines))
