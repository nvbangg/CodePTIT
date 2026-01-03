def get_coefficient(group, years):
    table = {
        "A": [10, 12, 14, 20],
        "B": [10, 11, 13, 16],
        "C": [9, 10, 12, 14],
        "D": [8, 9, 11, 13]
    }
    if years < 4:
        idx = 0
    elif years < 9:
        idx = 1
    elif years < 16:
        idx = 2
    else:
        idx = 3
    return table[group][idx]

class Staff:
    def __init__(self, id_name, name, salary, days_work, room):
        self.id_name = id_name
        self.name = name
        self.salary = salary
        self.days_work = days_work
        self.room = room
    
    def get_salary(self):
        return self.salary * self.days_work * get_coefficient(self.id_name[0], int(self.id_name[1:3]))
    
    def __str__(self):
        return f"{self.id_name} {self.name} {self.room} {self.get_salary()}"

n = int(input())
id_major = {}
for _ in range(n):
    tmp = list(map(str, input().split()))
    id = tmp[0]
    name = " ".join(tmp[1:])
    id_major[id] = name

m = int(input())
staffs = []
for _ in range(m):
    id = input().strip()
    name = input().strip()
    salary = int(input().strip()) * 1000
    days_work = int(input().strip())
    room = id_major[id[3:]]
    staff = Staff(id, name, salary, days_work, room)
    staffs.append(staff)

for staff in staffs:
    print(staff)