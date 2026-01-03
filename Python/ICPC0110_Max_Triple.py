import sys
import heapq

for _ in range(int(sys.stdin.readline())):
    sys.stdin.readline()
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.split()))
    ans = 0
    ans += heapq.nlargest(3, a)
    sys.stdout.writelines(str(ans))
