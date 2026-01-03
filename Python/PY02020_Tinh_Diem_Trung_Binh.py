n = int(input())
a = list(map(float, input().split()))
l = [item for item in a if item != min(a) and item != max(a)]
print(f"{sum(l) / len(l):.2f}")
