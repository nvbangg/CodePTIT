from datetime import datetime

class Schedule:
    def __init__(self, id_order, id_sub, name_sub, date, time, group):
        self.id_order = f"T{id_order:03d}"
        self.id_sub = id_sub
        self.name_sub = name_sub
        self.date = date
        self.time = time
        self.group = group

    def __str__(self):
        return f"{self.id_order} {self.id_sub} {self.name_sub} {self.date} {self.time} {self.group}"

if __name__ == "__main__":
    n, m = map(int, input().split())
    infor_sub = {}
    for _ in range(n):
        id = input().strip()
        name = input().strip()
        infor_sub[id] = name

    scheds = []
    for _ in range(m):
        data = input().strip().split()
        id_order = _ + 1
        id_sub = data[0]
        name_sub = infor_sub[data[0]]
        date = data[1]
        time = data[2]
        group = data[3]
        scheds.append(Schedule(id_order, id_sub, name_sub, date, time, group))

    scheds = sorted(scheds, key=lambda sched: (
        datetime.strptime(sched.date, "%d/%m/%Y"),
        datetime.strptime(sched.time, "%H:%M"),
        sched.id_sub
    ))

    for sched in scheds:
        print(sched)