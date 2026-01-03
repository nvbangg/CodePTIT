lines = open('VANBAN.in', 'r')
dict = {}
max_len = 0
for line in lines:
    for x in line.split():
        if x == x[::-1]:
            if x not in dict:
                max_len = max(max_len, len(x))
                dict[x] = 1
            else:
                dict[x] += 1

for key, value in dict.items():
    if len(key) == max_len:
        print(key, value)