class Gamer:
    def __init__(self, id, name, start_time, end_time):
        self.id = id
        self.name = name
        start_hh, start_mm = map(int, start_time.split(':'))
        end_hh, end_mm = map(int, end_time.split(':'))
        if end_mm < start_mm:
            end_hh -= 1
            end_mm += 60
        self.hh = end_hh - start_hh
        self.mm = end_mm - start_mm

    def __str__(self):
        return f'{self.id} {self.name} {self.hh} gio {self.mm} phut'

gamers = []
for _ in range(int(input())):
    id = input()
    name = input()
    start_time = input()
    end_time = input()
    gamers.append(Gamer(id, name, start_time, end_time))

gamers.sort(key=lambda g: (g.hh, g.mm), reverse=True)
for g in gamers:
    print(g)