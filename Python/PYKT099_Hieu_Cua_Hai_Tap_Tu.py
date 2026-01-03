list1, list2 = [], []
data1 = open("DATA1.in", "r")
list1 = data1.read().split()
list1 = [word.lower() for word in list1]
data2 = open("DATA2.in", "r")
list2 = data2.read().split()
list2 = [word.lower() for word in list2]

print(*sorted(list(set(list1) - set(list2))))
print(*sorted(list(set(list2) - set(list1))))