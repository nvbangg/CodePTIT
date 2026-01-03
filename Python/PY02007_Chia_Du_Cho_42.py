import sys
print(len(set(int(item) % 42 for item in sys.stdin.read().split())))