s1, s2 = input(), input()
n = int(input())
n -= 1
print(s1[:n] + s2 + s1[n:])