non_integer = []

f = open("DATA.in", "r")
words = f.read().split()
for word in words:
    try:
        num = int(word)
        if num > (1 << 31) - 1 or num < -(1 << 31):
            non_integer.append(word)
    except ValueError:
        non_integer.append(word)
    
non_integer.sort()
print(*non_integer)