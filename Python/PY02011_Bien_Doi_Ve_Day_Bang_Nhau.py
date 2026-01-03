n = int(input())
a = list(map(int, input().split()))

min_steps = float('inf')
best_value = None

for target in a:
    steps = sum(abs(x - target) for x in a)
    if steps < min_steps:
        min_steps = steps
        best_value = target

print(min_steps, best_value)
