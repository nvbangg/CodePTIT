topic = {}
check = 0
top = None
for _ in range(int(input())):
    if not check:
        s = input()
        topic[s] = []
        top = s
        check = 1
    else:
        s = input()
        if s == "":
            check = 0
            continue
        topic[top].append(s)

for name in topic.keys():
    print(f"{name}: {len(topic[name])}")