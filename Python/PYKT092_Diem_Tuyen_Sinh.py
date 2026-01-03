import string
prioritys = [0, 1.5, 1, 0]
groups = {
    'Kinh' : 0,
    'Others' : 1.5
}

class Thi_sinh:
    def __init__(self, id, name, score, group, region):
        self.id = f'TS{id:02d}'
        self.name = string.capwords(name)
        self.group = group
        self.region = 'Kinh' if region == 'Kinh' else 'Others'
        self.score = score

    def get_reality_score(self):
        return self.score + prioritys[self.group] + groups[self.region]

    def get_status(self):
        return 'Do' if self.get_reality_score() >= 20.5 else 'Truot'

    def __str__(self):
        return f'{self.id} {self.name} {self.get_reality_score()} {self.get_status()}'

TS = []
for _ in range(int(input())):
    name = input()
    score = float(input())
    region = input()
    group = int(input())
    thi_sinh = Thi_sinh(_ + 1, name, score, group, region)
    TS.append(thi_sinh)

TS.sort(key = lambda x: (- x.get_reality_score(), x.id))
for thi_sinh in TS:
    print(thi_sinh)