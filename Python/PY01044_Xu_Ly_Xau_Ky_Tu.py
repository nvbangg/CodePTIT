s1 = set(input().lower().split())
s2 = set(input().lower().split())

print(f"{' '.join(sorted(s1 | s2))}\n{' '.join(sorted(s1 & s2))}")